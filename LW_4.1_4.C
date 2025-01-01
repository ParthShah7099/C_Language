#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	clrscr();
	printf("Please enter the integer value of a:\n");
	scanf("%d",&a);
	printf("Please enter the integer value of b:\n");
	scanf("%d",&b);

	printf("The values of a and b brfore swapping is:\na = %d\nb = %d",a,b);
	c = a;
	a = b;
	b = c;

	printf("\nThe values of a and b after swapping is:\na = %d\nb = %d",a,b);
	getch();

}