#include <stdio.h>
#include<conio.h>

// WAP to find maximum from 4 given numbers using nested if else.

main()
{
    int a, b, c, d;
    clrscr();
    printf("Enter first numbers: ");
    scanf("%d",&a);
    printf("Enter second numbers: ");
    scanf("%d",&b);
    printf("Enter third numbers: ");
    scanf("%d",&c);
    printf("Enter fourth numbers: ");
    scanf("%d",&d);


    if (a == b && b == c && c == d)
    {
	printf("All numbers are equal: %d", a);
    }
    else
    {
	int max;

	if (a > b)
	{
	    if (a > c)
	    {
		if (a > d)
		{
		    max = a;
		}
		else
		{
		    max = d;
		}
	    }
	    else
	    {
		if (c > d)
		{
		    max = c;
		}
		else
		{
		    max = d;
		}
	    }
	}
	else
	{
	    if (b > c)
	    {
		if (b > d)
		{
		    max = b;
		}
		else
		{
		    max = d;
		}
	    }
	    else
	    {
		if (c > d)
		{
		    max = c;
		}
		else
		{
		    max = d;
		}
	    }
	}


	if ((a == max && b == max) || (a == max && c == max) || (a == max && d == max) ||
	    (b == max && c == max) || (b == max && d == max) || (c == max && d == max))
	{
	    printf("The maximum number is: %d and some values are the same.", max);
	}
	else
	{
	    printf("The maximum number is: %d", max);
	}
    }

    getch();
}
