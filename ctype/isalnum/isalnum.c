/*************************************************************************
	> File Name: isalnum.c
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Sun 06 Apr 2014 09:38:24 PM CST
 ************************************************************************/

#include<stdio.h>
#include<ctype.h>

int main()
{
	int i;
	char str[] = "c3po...";
	i = 0;
	while (isalnum(str[i]))
		i++;
	printf("The first %d characters are alphanumeric.\n", i);

	return 0;
}

