/*************************************************************************
	> File Name: asctime.c
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Wed 19 Mar 2014 06:16:39 PM CST
 ************************************************************************/

#include<stdio.h> /* printf */
#include<time.h>  /* time_t, struct tm, time, localtime, asctime*/

int main()
{
	time_t rawtime;
	struct tm* timeinfo;

	time (&rawtime);
	timeinfo = localtime( &rawtime);
	printf ( "The current date/time is: %s", asctime(timeinfo));

	return 0;
}

