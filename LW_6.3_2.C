#include<stdio.h>
#include<conio.h>

// WAP to find the factorial of number N using a for loop.

main()
{
	int i,fact = 1,n;
	clrscr();
	printf("Enter Number: ");
	scanf("%d",&n);
	if(n <= 0)
	{
		printf("The factorial is: 1");
	}
	else
	{
		for(i = 1; i <= n; i++)
			{
				fact *= i;
			}
	printf("The factorial is: %d",fact);
	}
	getch();

}