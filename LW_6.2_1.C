#include<stdio.h>
#include<conio.h>

//WAP tp print 1 to 10 using do-while loop.

main()
{
	int i = 1;
	clrscr();
	do
	{
		printf("%d\n",i);
		i++;
	}
	while(i <= 10);
	getch();
}