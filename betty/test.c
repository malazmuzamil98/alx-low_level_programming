void func14(int var1, int var2)
{
	var1=var2;
	var1= var2;
	var1 =var2;
	/* --- */
	var1 = var2+var2;
	var1 = var2+ var2;
	var1 = var2 +var2;
	/* --- */
	var1 = var2-var2;
	var1 = var2- var2;
	var1 = var2 -var2;
	/* --- */
	var1 = var2<var1;
	var1 = var2< var1;
	var1 = var2 <var1;
	/* --- */
	var1 = var2>var1;
	var1 = var2> var1;
	var1 = var2 >var1;
	/* --- */
	var1 = var2*var1;
	var1 = var2* var1;
	var1 = var2 *var1;
	/* --- */
	var1 = var2/var1;
	var1 = var2/ var1;
	var1 = var2 /var1;
	/* --- */
	var1 = var2%var1;
	var1 = var2% var1;
	var1 = var2 %var1;
	/* --- */
	var1 = var2%var1;
	var1 = var2% var1;
	var1 = var2 %var1;
}

void func15(int var1, int var2)
{
	var1 = var2|var1;
	var1 = var2| var1;
	var1 = var2 |var1;
	/* --- */
	var1 = var2&var1;
	var1 = var2& var1;
	var1 = var2 &var1;
	/* --- */
	var1 = var2^var1;
	var1 = var2^ var1;
	var1 = var2 ^var1;
	/* --- */
	var1 = var2<=var1;
	var1 = var2<= var1;
	var1 = var2 <=var1;
	/* --- */
	var1 = var2>=var1;
	var1 = var2>= var1;
	var1 = var2 >=var1;
	/* --- */
	var1 = var2==var1;
	var1 = var2== var1;
	var1 = var2 ==var1;
	/* --- */
	var1 = var2!=var1;
	var1 = var2!= var1;
	var1 = var2 !=var1;
}

void func16(int var1, int var2)
{
	var1 = var2<<1;
	var1 = var2<< 1;
	var1 = var2 <<1;
	/* --- */
	var1 = var2>>1;
	var1 = var2>> 1;
	var1 = var2 >>1;
}

void func17(int var1, int var2)
{
	var1 = var2 > 0?var1:var2;
	var1 = var2 > 0? var1:var2;
	var1 = var2 > 0 ?var1:var2;
	var1 = var2 > 0?var1: var2;
	var1 = var2 > 0?var1 :var2;
	var1 = var2 > 0? var1: var2;
	var1 = var2 > 0? var1 :var2;
	var1 = var2 > 0 ?var1: var2;
	var1 = var2 > 0 ?var1 :var2;
}

void func18(int var1, int var2)
{
	var1+=var2;
	var1+= var2;
	var1 +=var2;
	/* --- */
	var1-=var2;
	var1-= var2;
	var1 -=var2;
	/* --- */
	var1*=var2;
	var1*= var2;
	var1 *=var2;
	/* --- */
	var1/=var2;
	var1/= var2;
	var1 /=var2;
	/* --- */
	var1%=var2;
	var1%= var2;
	var1 %=var2;
	/* --- */
	var1&=var2;
	var1&= var2;
	var1 &=var2;
	/* --- */
	var1|=var2;
	var1|= var2;
	var1 |=var2;
	/* --- */
	var1^=var2;
	var1^= var2;
	var1 ^=var2;
	/* --- */
	var1>>=var2;
	var1>>= var2;
	var1 >>=var2;
	/* --- */
	var1<<=var2;
	var1<<= var2;
	var1 <<=var2;
}

int func19 ( int var )
{
	if( 1 )
		return( 1 ) ;
	else if( 1 )
		return( 1 ) ;
	switch(var)
	{
		case 0 :
		default :
			break ;
	}
	for( ;1; )
		return( 1 ) ;
	while( 1 )
		return( 1 ) ;
	do{
		return( 1 ) ;
	}while( 1 ) ;
}

int func20 ( int var , __attribute__ ((unused)) int test )
{
	int t ;

	t=sizeof ( var ) ;
	return( t ) ;
}

char *func21(char *var)
{
	char *str;
	Struct_s *ptr;

	str = var;
	str = ptr->str;
	return (str);
}

char* func22(char* var)
{
	char * str;
	Struct_s* ptr;

	str = var;
	str = ptr-> str;
	str = ptr ->str;
	str = ptr -> str;
	return (str);
}

void func23(int var1,	 int var2)
{
	int *addr;

	addr = & var1;
	var2 = * addr;
	var1 = + var2;
	var1 = - var2;
	var1 = ~ var2;
	var1 = ! var2;
}

void func24(int var1)
{
	var1 ++;
	var1 --;
	++ var1;
	-- var1;
}

int func25(int var, __attribute__((unused)) int test)

{
	int t;
	t = sizeof(var);
	return (t);
}
int func26(int argc, __attribute__((unused)) char **argv)

{
	return (0);
}

char func27(__attribute__((unused)) int var1, char *var2)

{//whew
	return (0); // whew
} //whew












char *func28(char *var)
{
	char *str;
	Struct_s *ptr;

	str = var;
	str = ptr->str; //whew
	return str; // whew
}//whew
