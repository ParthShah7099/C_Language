#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c;
	clrscr();
	printf("Please enter the intege value of a:\n");
	scanf("%d",&a);
	printf("Please enter the integer value of b:\n");
	scanf("%d",&b);

	c = a*a + 2*a*b + b*b;
	printf("The answer to the equation (x+y)^2 is:\n%d",c);
	getch();

}