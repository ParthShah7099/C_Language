#include<stdio.h>
#include<conio.h>
main()
{
	float a,b;
	clrscr();
	printf("Enter the first number: ");
	scanf("%f",&a);
	printf("Enter the second number: ");
	scanf("%f",&b);
	if(a < b)
	{
		printf("\n%f is the minimum value.",a);
	}
	else if(b < a)
	{
		printf("\n%f is the minimum value.",b);
	}
	else
	{
		printf("\n %f and %f are same values",a,b);
	}
	getch();



}