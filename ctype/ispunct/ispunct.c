/*************************************************************************
	> File Name: ispunct.c
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Tue 08 Apr 2014 11:16:40 AM CST
 ************************************************************************/

#include<stdio.h>
#include<ctype.h>

int main()
{
	int i=0;
	int cx=0;
	char str[] = "Hello, welcome!";
	while (str[i]) {
		if (ispunct(str[i]))
			cx++;
		i++;
	}

	printf("Sentence contains %d punctuation characters.\n", cx);
	return 0;
}

