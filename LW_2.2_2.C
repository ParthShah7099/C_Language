#include<stdio.h>
#include<conio.h>

main()
{
	float a,area;
	clrscr();
	printf("Please enter the length of a square:\n");
	scanf("%f",&a);
	area = a * a;
	printf("Area of the square is:\n%0.2f",area);
	getch();



}