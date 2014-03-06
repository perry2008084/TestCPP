/*************************************************************************
	> File Name: strncpy.cpp
	> Author: Pansj 
	> Mail: perry2008084@gmail.com 
	> Created Time: Thu 06 Mar 2014 10:59:38 PM UTC
 ************************************************************************/
#include<cstdio>
#include<cstring>

int main()
{
	char str1[] = "To be or not to be";
	char str2[40];
	char str3[40];

	strncpy(str2, str1, sizeof(str2));

	strncpy(str3, str2, 5);
	str3[5] = '\n';

	puts(str1);
	puts(str2);
	puts(str3);

	return 0;
}

