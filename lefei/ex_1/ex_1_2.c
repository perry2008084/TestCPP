/*************************************************************************
	> File Name: ex_1_2.c
	> Author: Pansj 
	> Mail: perry2008084@gmail.com 
	> Created Time: Tue 04 Mar 2014 01:02:56 AM UTC
 ************************************************************************/
#include<stdio.h>

int main()
{
	unsigned int a = 6;
	signed int b = -20;
	signed int c = 6;

	printf("%d\n", a+b);
	(a+b) > a ? puts(">6") : puts("<=6");
	(a+b) > c ? puts(">6") : puts("<=6");

	return 0;
}
