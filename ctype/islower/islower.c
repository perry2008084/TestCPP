/*************************************************************************
	> File Name: islower.c
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Tue 08 Apr 2014 11:08:29 AM CST
 ************************************************************************/

#include<stdio.h>
#include<ctype.h>

int main()
{
	int i = 0;
	char str[] = "Test String.\n";
	char c;
	while (str[i]) {
		c = str[i];
		if (islower(c))
			c = toupper(c);
		putchar(c);
		i++;
	}

	return 0;
}

