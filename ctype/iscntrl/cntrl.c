/*************************************************************************
	> File Name: cntrl.c
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Mon 07 Apr 2014 10:10:00 PM CST
 ************************************************************************/

#include<stdio.h>
#include<ctype.h>

int main()
{
	int i = 0;
	char str[] = "first line \n second line \n";
	while (!iscntrl(str[i])) {
		putchar(str[i]);
		i++;
	}

	return 0;
}

