#include<stdio.h>
#include<conio.h>

// WAP to print the multiplication table of the number N using any type of loop.

main()
{
	int i,n,mul;
	clrscr();
	printf("Enter number: ");
	scanf("%d",&n);
	if(n <= 0)
	{
		printf("Please enter positive number...");
	}
	else
	{
		for(i=1; i<=10; i++)
		{
			mul = i * n;
			printf("%d X %d = %d\n",n,i,mul);
		}
	}
	getch();
}