/*************************************************************************
	> File Name: localtime.c
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Wed 19 Mar 2014 09:27:38 PM CST
 ************************************************************************/

#include<stdio.h> /* puts, printf */
#include<time.h>  /* time_t, struct tm, time, localtime */

int main()
{
	time_t rawtime;
	struct tm * timeinfo;

	time(&rawtime);
	timeinfo = localtime(&rawtime);
	printf("Current local time and date: %s", asctime(timeinfo));

	return 0;
}

