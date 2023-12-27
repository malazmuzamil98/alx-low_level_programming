int func0(int var)
{
if  (1)
return  (1);
else if  (1)
return  (1);
switch  (var)
	{
		case 0:
		default:
			break;
	}
for  ( ;  1;   )
return  (1);
while  (1)
return  (1);
do  {
return  (1);
}  while  (1);
}

int func1(int var, __attribute__((unused)) int test)
{
	int t;

t = sizeof(var);
return  (t);
}

char *func2(char *var)
{
	char *str;
	Struct_s *ptr;

	str = var;
	str = ptr->str;
	return (str);
}

char *func3(char *var)
{
	char *str;
	Struct_s *ptr;

	str = var;
	str = ptr->str;
	str = ptr->str;
	str = ptr->str;
	return (str);
}

void func4(int var1, int var2)
{
	var1 = var2;
	var1 = var2;
	var1 = var2;
	/* --- */
	var1 = var2 + var2;
	var1 = var2 + var2;
	var1 = var2 + var2;
	/* --- */
	var1 = var2 - var2;
	var1 = var2 - var2;
	var1 = var2 - var2;
	/* --- */
	var1 = var2 < var1;
	var1 = var2 < var1;
	var1 = var2 < var1;
	/* --- */
	var1 = var2 > var1;
	var1 = var2 > var1;
	var1 = var2 > var1;
	/* --- */
	var1 = var2 * var1;
	var1 = var2 * var1;
	var1 = var2 * var1;
	/* --- */
	var1 = var2 / var1;
	var1 = var2 / var1;
	var1 = var2 / var1;
	/* --- */
	var1 = var2 % var1;
	var1 = var2 % var1;
	var1 = var2 % var1;
	/* --- */
	var1 = var2 % var1;
	var1 = var2 % var1;
	var1 = var2 % var1;
}

void func5(int var1, int var2)
{
	var1 = var2 | var1;
	var1 = var2 | var1;
	var1 = var2 | var1;
	/* --- */
	var1 = var2 & var1;
	var1 = var2 & var1;
	var1 = var2 & var1;
	/* --- */
	var1 = var2 ^ var1;
	var1 = var2 ^ var1;
	var1 = var2 ^ var1;
	/* --- */
	var1 = var2 <= var1;
	var1 = var2 <= var1;
	var1 = var2 <= var1;
	/* --- */
	var1 = var2 >= var1;
	var1 = var2 >= var1;
	var1 = var2 >= var1;
	/* --- */
	var1 = var2 == var1;
	var1 = var2 == var1;
	var1 = var2 == var1;
	/* --- */
	var1 = var2 != var1;
	var1 = var2 != var1;
	var1 = var2 != var1;
}

void func6(int var1, int var2)
{
	var1 = var2 << 1;
	var1 = var2 << 1;
	var1 = var2 << 1;
	/* --- */
	var1 = var2 >> 1;
	var1 = var2 >> 1;
	var1 = var2 >> 1;
}

void func7(int var1, int var2)
{
	var1 = var2 > 0 ? var1 : var2;
	var1 = var2 > 0 ? var1 : var2;
	var1 = var2 > 0 ? var1 : var2;
	var1 = var2 > 0 ? var1 : var2;
	var1 = var2 > 0 ? var1 : var2;
	var1 = var2 > 0 ? var1 : var2;
	var1 = var2 > 0 ? var1 : var2;
	var1 = var2 > 0 ? var1 : var2;
	var1 = var2 > 0 ? var1 : var2;
}

void func8(int var1, int var2)
{
	var1 += var2;
	var1 += var2;
	var1 += var2;
	/* --- */
	var1 -= var2;
	var1 -= var2;
	var1 -= var2;
	/* --- */
	var1 *= var2;
	var1 *= var2;
	var1 *= var2;
	/* --- */
	var1 /= var2;
	var1 /= var2;
	var1 /= var2;
	/* --- */
	var1 %= var2;
	var1 %= var2;
	var1 %= var2;
	/* --- */
	var1 &= var2;
	var1 &= var2;
	var1 &= var2;
	/* --- */
	var1 |= var2;
	var1 |= var2;
	var1 |= var2;
	/* --- */
	var1 ^= var2;
	var1 ^= var2;
	var1 ^= var2;
	/* --- */
	var1 >>= var2;
	var1 >>= var2;
	var1 >>= var2;
	/* --- */
	var1 <<= var2;
	var1 <<= var2;
	var1 <<= var2;
}

void func9(int var1, int var2)
{
	int *addr;

	addr = &var1;
	var2 = *addr;
	var1 = +var2;
	var1 = -var2;
	var1 = ~var2;
	var1 = !var2;
}

void func10(int var1)
{
	var1++;
	var1--;
	++var1;
	--var1;
}
int main(void)
{
	return (0);
}
int main1(int argc, char **argv)
{
	(void)argc;
	(void)argv;
}
