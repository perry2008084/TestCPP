/*************************************************************************
	> File Name: ex_12.c
	> Author: Pansj 
	> Mail: perry2008084@gmail.com 
	> Created Time: Tue 04 Mar 2014 12:51:41 PM UTC
 ************************************************************************/
#include<stdio.h>

void main()
{
	int a,b,c,d;
	a = 10;
	b = a++;
	c = ++a;
	d = 10*a++;
	printf("b, c, d: %d, %d, %d", b, c, d);
}
