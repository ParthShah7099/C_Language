#include<stdio.h>
#include<conio.h>

//WAP to create a menu-driven program for telecom call service conversation using nested switch case.

main()
{
	int lan,sub;
	clrscr();
	printf("Main menu:-\n");
	printf("Press 1 for English:\n");
	printf("Press 2 for Hindi:\n");
	printf("Press 3 for Gujarati:\n");
	printf("Enter your choice: ");
	scanf("%d",&lan);
	switch(lan)
	{
	   case 1 : printf("Sub menu:- \n");
		    printf("Press 1 for Internet Recharge:\n");
		    printf("Press 2 for Top-up Recharge:\n");
		    printf("Press 3 for Special Recharge:\n");
		    printf("Enter your choice: ");
		    scanf("%d",&sub);
		    switch(sub)
		    {
		     case 1: printf("You have successfully done Internet Recharge...!\n");
				break;
		     case 2: printf("You have successfully done Top-up Recharge...!\n");
				break;
		     case 3: printf("You have successfully done Special Recharge...!\n");
				break;
		     default: printf("Invalid Choice:");
		    }
		    break;
	   case 2 : printf("Sub menu:- \n");
		    printf("Internet recharge ke liye 1 dabaye:\n");
		    printf("Top-up Recharge ke liye 2 dabaye:\n");
		    printf("Special Recharge ke liye 3 dabaye:\n");
		    printf("Enter your choice: ");
		    scanf("%d",&sub);
		    switch(sub)
		    {
		     case 1: printf("Aapne safalta purvak Internet Recharge kar liya haii...!\n");
				break;
		     case 2: printf("Aapne safalta purvak Tou-up Recharge kar liya haii...!\n");
				break;
		     case 3: printf("Aapne safalta purvak Special Recharge kar liya haii...!\n");
				break;
		     default: printf("Invalid Choice:");
		    }
		    break;
	   case 3 : printf("Sub menu:- \n");
		    printf("Internet recharge mate 1 dabavo:\n");
		    printf("Top-up Recharge mate 2 dabavo:\n");
		    printf("Special Recharge mate 3 dabavo:\n");
		    printf("Enter your choice: ");
		    scanf("%d",&sub);
		    switch(sub)
		    {
		     case 1: printf("Tame safalta purvak Internet Recharge kari didhu che...!\n");
				break;
		     case 2: printf("Tame safalta purvak Tou-up Recharge kari didhu che...!\n");
				break;
		     case 3: printf("Tame safalta purvak Special Recharge kari didhu che...!\n");
				break;
		     default: printf("Invalid Choice:");
		    }
		    break;
	   default: printf("Invalid Choice: ");
	}
	getch();


}