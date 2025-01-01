#include<stdio.h>
#include<conio.h>

// WAP to print the sum of all numbers from 1 to n using for loop.

main()
{
	int n,sum = 0,i;
	clrscr();
	printf("Enter number: ");
	scanf("%d",&n);
	if(n < 0)
	{
		printf("Please enter positive number....");
	}
	else
	{
		for(i = 1; i <= n; i++)
		{
			sum += i;
		}
		printf("The sum of all numbers is: %d",sum);
	}
	getch();


}