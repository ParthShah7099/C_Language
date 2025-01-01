#include<stdio.h>
#include<conio.h>

// WAP to print even enumbers from 1 to N using do-While loop.

main()
{
	int i,n;
	clrscr();
	printf("Enter number: ");
	scanf("%d",&n);
	i = 1;
	do
	{
		if(i%2 == 0)
		{
			printf("%d\t",i);

		}
	i++;
	}
	while(i <= n);
	getch();


}