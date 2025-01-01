#include<stdio.h>
#include<conio.h>
#define FOR p*r*n/100

main()
{
	float p,r,n,si;
	clrscr();
	printf("Please enter the principal amount:\n");
	scanf("%f",&p);
	printf("Please enter the Rate of intrest:\n");
	scanf("%f",&r);
	printf("Please enter the Time period:\n");
	scanf("%f",&n);

	si = FOR;
	printf("Simple intrest of the given information is:\n%0.2f",si);
	getch();



}