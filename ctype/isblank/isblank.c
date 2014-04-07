/*************************************************************************
	> File Name: isblank.c
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Mon 07 Apr 2014 10:01:23 PM CST
 ************************************************************************/

#include<stdio.h>
#include<ctype.h>

int main()
{
	char c;
	int i = 0;
	char str[] = "Example sentence to test isblank\n";
	while (str[i]) {
		c = str[i];
		if (isblank(c))
			c = '\n';
		putchar(c);
		i++;
	}

	return 0;
}

