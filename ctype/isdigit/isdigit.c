/*************************************************************************
	> File Name: isdigit.c
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Tue 08 Apr 2014 11:01:12 AM CST
 ************************************************************************/

#include<stdio.h>
#include<ctype.h>

int main()
{
	char str[]="1776ad";
	int year;
	if (isdigit(str[0])) {
		year = atoi(str);
		printf("The year that followed %d was %d.\n",year, year+1);
	}

	return 0;
}

