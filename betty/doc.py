import re

def generate_documentation(file_name, function_name):
    try:
        with open(file_name, 'r') as file:
            lines = file.readlines()

        # Search for the function
        pattern = r'\b' + re.escape(function_name) + r'\b[^(]*\([^)]*\)'
        for i, line in enumerate(lines):
            if re.search(pattern, line):
                function_start_line = i
                break
        else:
            raise ValueError(f"No function named '{function_name}' found in the file.")

        # Extract function arguments
        args_match = re.search(r'\(([^)]*)\)', lines[function_start_line])
        if args_match:
            # Extract arguments from the updated text
            args_text = args_match.group(1).strip()

            # Ignore if arguments are "void"
            if args_text.lower() == 'void':
                arguments = []
            else:
                while ')' not in args_text and '\n' not in lines[function_start_line]:
                    # Iterate through the remaining lines until a closing parenthesis or a new line is encountered
                    function_start_line += 1
                    args_text += lines[function_start_line].strip()

                arguments = args_text.split(',')
                arguments = [arg.strip().split(' ')[-1].lstrip('*') if '*' in arg else arg.strip().split(' ')[-1] for arg in arguments if arg.strip()]

        # Create documentation
        documentation = []
        documentation.append('/**')
        documentation.append(f' * {function_name} - a Function that ...')
        if arguments:
            for arg in arguments:
                # Correctly identify the second argument as the word before the last closing parenthesis
                if arg == arguments[-1]:
                    documentation.append(f' * @{arg}: Description of {arg}.')
                else:
                    documentation.append(f' * @{arg}: Description of {arg}.')
        documentation.append(' * Return: Description of the return value.')
        documentation.append(' */\n')  # Add a new line after closing '/'

        # Insert documentation into the file
        lines.insert(function_start_line, '\n'.join(documentation))

        # Write back to the file
        with open(file_name, 'w') as file:
            file.writelines(lines)

        print(f"Documentation for '{function_name}' added successfully.")

    except Exception as e:
        print(f"Error: {e}")

# Example usage
for i in range(11):
    generate_documentation('j.c', f'func{i}')
generate_documentation('j.c', 'main')
generate_documentation('j.c', 'main1')