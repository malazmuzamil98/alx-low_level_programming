#!/bin/bash

# clear the terminal
clear
# check if python3 is installed
if ! command -v python3 &> /dev/null; then
	# install python3 if not installed
	sudo apt-get update
	sudo apt-get install -y python3
fi
 # copy all python scripts to ~ with a dot prefix to make them hidden
for script in *.py dot
	sudo cp "$script" "~/.${script}"
done

# Add an alias to .bashrc
echo "alias fix='python3 /bin/betty_fixer.py'" >> ~/.bashrc

# Inform the user about the changes
echo -e "please copy and run this command\n"
echo -e "          source ~/.bashrc"
read -p "Press [Enter] key to continue ..."

clear

echo -e "Usage:\n"
echo -e "      fix file1.c file2.c .... \n"