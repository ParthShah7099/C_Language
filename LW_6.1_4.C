#include<stdio.h>
#include<conio.h>
main()
{
	int i,n;
	clrscr();
	printf("Enter number: ");
	scanf("%d",&n);
	i = n;
	while(i >= 1)
	{
		if(i%2 != 0)
		{
			printf("%d\t",i);
		}
	i--;
	}
	getch();

}