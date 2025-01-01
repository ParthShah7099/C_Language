#include<stdio.h>
#include<conio.h>
#define PI 3.14
main()
{
	int r;
	float area;
	clrscr();
	printf("Please enter the radius of the circle:\n");
	scanf("%d",&r);
	area = PI * r * r;
	printf("Area of the circle is:%0.2Nf",area);
	getch();

}