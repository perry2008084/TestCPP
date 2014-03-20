/*************************************************************************
	> File Name: strftime.c
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Thu 20 Mar 2014 09:23:09 AM CST
 ************************************************************************/

#include<stdio.h>  /* puts */
#include<time.h>   /* time_t, struct tm, time, localtime, strftime */

int main()
{
	time_t rawtime;
	struct tm* timeinfo;
	char buffer[80];

	time(&rawtime);
	timeinfo = localtime(&rawtime);

	strftime(buffer,80,"Now it's %I:%M%p.",timeinfo);
	puts(buffer);

	return 0;
}

