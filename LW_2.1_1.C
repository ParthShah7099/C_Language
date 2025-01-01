#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,sum,sub,mul,div,mod;
	clrscr();
	a = 12;
	b = 6;
	sum = a + b;
	sub = a - b;
	mul = a * b;
	div = a / b;
	mod = a % b;
	printf("Addition       of %d and %d is %d.\n",a,b,sum);
	printf("Substraction   of %d and %d is %d.\n",a,b,sub);
	printf("Multiplication of %d and %d is %d.\n",a,b,mul);
	printf("Division       of %d and %d is %d.\n",a,b,div);
	printf("Modulo         of %d and %d is %d.\n",a,b,mod);
	printf("\n\n%d + %d = %d\n",a,b,sum);
	printf("%d + %d = %d\n",a,b,sub);
	printf("%d + %d = %d\n",a,b,mul);
	printf("%d + %d = %d\n",a,b,div);
	printf("%d + %d = %d\n",a,b,mod);
	getch();
	return 0;
}