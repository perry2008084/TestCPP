/*************************************************************************
	> File Name: strncat.cpp
	> Author: Pansj 
	> Mail: perry2008084@gmail.com 
	> Created Time: Thu 06 Mar 2014 10:51:09 PM UTC
 ************************************************************************/
#include<cstdio>
#include<cstring>

int main()
{
	char str1[20];
	char str2[20];
	strcpy(str1,"To be ");
	strcpy(str2,"or not to be");
	strncat(str1,str2,6);
	puts(str1);
	return 0;
}

