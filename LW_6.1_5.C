#include<stdio.h>
#include<conio.h>

// WAP to print leap years between two given numbers using a while loop.

main()
{
	int year1,year2,i;
	clrscr();
	printf("Enter the starting year: ");
	scanf("%d",&year1);
	printf("Enter the End year: ");
	scanf("%d",&year2);
	i = year1;
	while(i <= year2)
	{
		if(i%4 == 0)
		{
			printf("%d\t",i);
		}
	i++;
	}
	getch();
}