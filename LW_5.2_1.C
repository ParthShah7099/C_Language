#include<stdio.h>
#include<conio.h>

// WAP to find maximum from given 3 numbers using nested if else.

main()
{
	float a,b,c;
	clrscr();
	printf("Enter the first value: ");
	scanf("%f",&a);
	printf("Enter the second value: ");
	scanf("%f",&b);
	printf("Enter the third value: ");
	scanf("%f",&c);

	if (a == b && b == c)
		{
			printf("\n%f %f %f are all same.",a,b,c);
		}

	else
	{
		if(a > b)
		{
			if(a > c)
			{
				printf("\n%f is the largest.",a);
			}
			else
			{
				printf("\n%f is the largest.",c);
			}
		}
		else
		{
			if(b > c)
			{
				printf("\n%f is the largest.",b);
			}
			else
			{
				printf("\n%f is the largest.",c);
			}
		}
      }

	getch();
}