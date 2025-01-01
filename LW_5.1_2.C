#include<stdio.h>
#include<conio.h>
main()
{
	float a;
	clrscr();
	printf("Enter a number: ");
	scanf("%f",&a);
	if(a > 0)
	{
		printf("%f is a positive number",a);
	}
	else if(a < 0)
	{
		printf("%f ia a negative number",a);
	}
	else
	{
		printf("%f is a netural number",a);
	}
	getch();


}