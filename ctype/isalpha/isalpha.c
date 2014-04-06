/*************************************************************************
	> File Name: isalpha.c
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Sun 06 Apr 2014 09:44:15 PM CST
 ************************************************************************/

#include<stdio.h>
#include<ctype.h>

int main()
{
	int i = 0;
	char str[] = "C++";
	while (str[i])
	{
		if (isalpha(str[i]))
			printf("character %c is alphabetic\n", str[i]);
		else 
			printf("char %c is not alphabetic\n", str[i]);

		i++;
	}

	return 0;
}

