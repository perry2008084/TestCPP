/*************************************************************************
	> File Name: isspace.c
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Tue 08 Apr 2014 11:19:24 AM CST
 ************************************************************************/

#include<stdio.h>
#include<ctype.h>

int main()
{
	char c;
	int i = 0;
	char str[] = "Example sentence to test isspace\n";
	while (str[i]) {
		c = str[i];
		if (isspace(c))
			c = '\n';
		putchar(c);
		i++;
	}

	return 0;
}

