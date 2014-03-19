/*************************************************************************
	> File Name: ctime.c
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Wed 19 Mar 2014 08:48:22 PM CST
 ************************************************************************/

#include<stdio.h>  /* printf */
#include<time.h>   /* time_t, time, ctime */

int main()
{
	time_t rawtime;

	time ( &rawtime);
	printf("The current local time is: %s", ctime(&rawtime));

	return 0;
}

