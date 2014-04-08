/*************************************************************************
	> File Name: toupper.c
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Tue 08 Apr 2014 11:30:04 AM CST
 ************************************************************************/

#include<stdio.h>
#include<ctype.h>

int main()
{
	int i = 0;
	char str[] = "Test String.\n";
	char c;
	while(str[i]) {
		c = str[i];
		putchar(toupper(c));
		i++;
	}

	return 0;
}

