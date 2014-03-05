/*************************************************************************
	> File Name: ex_11.c
	> Author: Pansj 
	> Mail: perry2008084@gmail.com 
	> Created Time: Tue 04 Mar 2014 12:45:15 PM UTC
 ************************************************************************/
#include <stdio.h>

typedef union {char a; int b[5]; long c;} FOOD;
struct data { int d; FOOD e; double f;} too;
FOOD g;

void main()
{
	printf("%d\n", sizeof(struct data) + sizeof(g));
	printf("%d\n",sizeof(double));
}
