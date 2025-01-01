#include<stdio.h>
#include<conio.h>

// WAP to find minimum number from three numbers using ternary operator

main()
{
	int a,b,c;
	clrscr();
	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	printf("Enter c: ");
	scanf("%d",&c);
	if(a == b && b == c && c == a)
	{
		printf("All the values are same.");
	}
	else if(a == b)
	{
		printf("Both a and b are same");
	}
	else if(a == c)
	{
		printf("Both a and c are same");
	}
	else if(c == b)
	{
		printf("Both b and c are same");
	}
	else
	{
	(a < b)

		? (a < c)
			?printf("A is minimum.")
			:printf("C is minimum.")
		: (b < c)
			?printf("B is minimum.")
			:printf("C is minimim.");
	}
	getch();
}