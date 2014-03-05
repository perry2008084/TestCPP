/*************************************************************************
	> File Name: memmove.cpp
	> Author: Pansj 
	> Mail: perry2008084@gmail.com 
	> Created Time: Wed 05 Mar 2014 10:56:59 PM UTC
 ************************************************************************/
#include<cstdio>
#include<cstring>

int main()
{
	char str[] = "memove can be very useful......";
	memmove (str+20, str+15, 11);
	puts(str);
	return 0;
}

