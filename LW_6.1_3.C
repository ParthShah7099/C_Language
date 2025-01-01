#include<stdio.h>
#include<conio.h>
main()
{
	int i,n;
	clrscr();
	printf("Enter number: ");
	scanf("%d",&n);
	i = 1;
	while(i <= n)
	{
		printf("%d\t",i);
		i++;
	}
	getch();

}