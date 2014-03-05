/*************************************************************************
	> File Name: strcpy.cpp
	> Author: Pansj 
	> Mail: perry2008084@gmail.com 
	> Created Time: Wed 05 Mar 2014 11:39:04 PM UTC
 ************************************************************************/
#include<cstdio>
#include<cstring>

int main()
{
	char str1[] = "Sample string";
	char str2[40];
	char str3[40];
	strcpy (str2,str1);
	strcpy (str3,"copy successful");
	printf("str1: %s\nstr2: %s\nstr3: %s\n",str1, str2, str3);
	return 0;
}

