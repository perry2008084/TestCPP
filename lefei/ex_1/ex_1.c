/*************************************************************************
	> File Name: ex_1.c
	> Author: Pansj 
	> Mail: perry2008084@gmail.com 
	> Created Time: Tue 04 Mar 2014 12:54:36 AM UTC
 ************************************************************************/
#include<stdio.h>

void foo(void)
{
	int a = -12;
	unsigned int b = 5;
	printf("%s", (a+b > 7) ? ("> 7") : ("<= 7"));
	puts("\n");
}

int main()
{
	foo();
	return 0;
}
