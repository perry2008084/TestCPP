/*************************************************************************
	> File Name: isprint.c
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Tue 08 Apr 2014 11:10:56 AM CST
 ************************************************************************/

#include<stdio.h>
#include<ctype.h>

int main()
{
	int i = 0;
	char str[] = "first line \n second line \n";
	while (isprint(str[i])) {
		putchar(str[i]);
		i++;
	}

	return 0;
}

