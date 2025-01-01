#include<stdio.h>
#include<conio.h>

// WAP to print fibonacci series up to n numbers using for loop.

main()
{
	int i,n,n1=0,n2=1,temp;
	clrscr();
	printf("Enter number: ");
	scanf("%d",&n);
	for(i = 1; i <= n; i++)
	{

		printf("%d,\t",n1);
		temp = n1;
		n1 = n2;
		n2 = temp;
		n1 = n1 + n2;

	}
	getch();

}