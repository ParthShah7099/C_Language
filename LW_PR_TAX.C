#include<stdio.h>
#include<conio.h>

main()
{
	int rate;

	float amt,tax,total;
	clrscr();
	printf("Please enter the value:\n");
	scanf("%f",&amt);
	printf("Please enter the Tax Rate:\n");
	scanf("%d",&rate);

	tax = amt * rate / 100;
	printf("Tax to be paid:%0.2f",tax);

	total = tax + amt;
	printf("\nTotal payable amount:%0.2f",total);
	getch();



}