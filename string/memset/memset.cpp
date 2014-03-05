/*************************************************************************
	> File Name: memset.cpp
	> Author: Pansj 
	> Mail: perry2008084@gmail.com 
	> Created Time: Wed 05 Mar 2014 11:06:14 PM UTC
 ************************************************************************/
#include<cstdio>
#include<cstring>

int main()
{
	char str[] = "almost every programmer should know memset!";
	memset(str,'-',6);
	puts(str);
	return 0;
}

