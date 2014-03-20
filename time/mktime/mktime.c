/*************************************************************************
	> File Name: mktime.c
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Thu 20 Mar 2014 09:13:09 AM CST
 ************************************************************************/

#include<stdio.h> /* printf, scanf */
#include<time.h>  /* time_t, struct tm, time, mktime */

int main()
{
	time_t rawtime;
	struct tm * timeinfo;
	int year, month, day;
	const char* weekday[] = { "Sunday","Monday",
							  "Tuesday", "Wednesday",
							  "Thursday", "Friday", "Saturday"};

	printf ("Enter year: ");
	scanf("%d",&year);
	printf("Enter month: ");
	scanf("%d",&month);
	printf("Enter day: ");
	scanf("%d",&day);

	time(&rawtime);
	timeinfo = localtime(&rawtime);
	timeinfo->tm_year = year - 1900;
	timeinfo->tm_mon = month - 1;
	timeinfo->tm_mday = day;

	/* call mktime: timeinfo->tm_wday will be set */
	mktime( timeinfo );

	printf("That day is a %s.\n", weekday[timeinfo->tm_wday]);

	return 0;
}

