#include<stdio.h>
#include<conio.h>
#define FOR (h*b)*0.5;

main()
{
	float h,b,area;
	clrscr();
	printf("Please enter the height of the triangle:\n");
	scanf("%f",&h);
	printf("Please enter the base of the triangle:\n");
	scanf("%f",&b);

	area = FOR;
	printf("Area of the triangle is:\n%0.2f",area);
	getch();
}
