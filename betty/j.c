	int func3 ( int var )
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

	int func4 ( int var , __attribute__ ((unused)) int test )
	{
		int t ;

		t=sizeof ( var ) ;
		return( t ) ;
	}

char *func5(char *var)
{
	char *str;
	Struct_s *ptr;

	str = var;
	str = ptr->str;
	return (str);
}

char* func6(char* var)
{
	char * str;
	Struct_s* ptr;

	str = var;
	str = ptr-> str;
	str = ptr ->str;
	str = ptr -> str;
	return (str);
}

void func7(int var1, int var2)
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

void func8(int var1, int var2)
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

void func9(int var1, int var2)
{
	var1 = var2<<1;
	var1 = var2<< 1;
	var1 = var2 <<1;
	/* --- */
	var1 = var2>>1;
	var1 = var2>> 1;
	var1 = var2 >>1;
}

void func10(int var1, int var2)
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

void func11(int var1, int var2)
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

void func12(int var1, int var2)
{
	int *addr;

	addr = & var1;
	var2 = * addr;
	var1 = + var2;
	var1 = - var2;
	var1 = ~ var2;
	var1 = ! var2;
}

void func13(int var1)
{
	var1 ++;
	var1 --;
	++ var1;
	-- var1;
}
