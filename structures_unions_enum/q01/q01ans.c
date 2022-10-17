/* Q.01, Write a program to represent time of the day in hrs, mins and secs. Use structures */

#include<stdio.h>
struct Time{
	int hour;
	int min;
	int sec;
};
	
void main()
{
	struct Time t;

	false:	
	printf("Enter the Hour: ");
	scanf("%d", &t.hour);
	
	if(t.hour>24)
	{
		printf("Invalid Input\n");
		goto false;
	}

	false1:	
	printf("Enter the Minutes: ");
	scanf("%d", &t.min);
	
	if(t.hour>60)
	{
		printf("Invalid Input\n");
		goto false1;
	}

	false3:	
	printf("Enter the Seconds: ");
	scanf("%d", &t.sec);
	
	if(t.hour>60)
	{
		printf("Invalid Input\n");
		goto false3;
	}

	if(t.hour<12)
	{
		printf("The Time is %d : %d : %d A.M.\n", t.hour, t.min, t.sec);
	}
	if(t.hour==12)
	{
		printf("The Time is %d : %d : %d P.M.\n", t.hour, t.min, t.sec);
	}
	if(t.hour>12)
	{
		printf("The Time is %d : %d : %d P.M.\n", t.hour, t.min, t.sec);
	}
}
