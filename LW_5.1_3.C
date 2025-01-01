#include<stdio.h>
#include<conio.h>
main()
{
	float maths, english, science, average;
	clrscr();
	printf("Enter the marks obtained in Maths: ");
	scanf("%f",&maths);
	printf("Enter the marks obtained in English: ");
	scanf("%f",&english);
	printf("Enter the marks obtained in Science: ");
	scanf("%f",&science);
	if(maths >= 0 && maths <= 100 && english >= 0 && english <= 100 && science >= 0 && science <= 100)
	{
		average = (maths + english + science)/3;
		printf("Average marks obtained: %.2f",average);
	}
	else
	{
		printf("Enter marks out of 100: ");
	}
	getch();

}