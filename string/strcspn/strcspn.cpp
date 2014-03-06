/*************************************************************************
	> File Name: strcspn.cpp
	> Author: Pansj 
	> Mail: perry2008084@gmail.com 
	> Created Time: Thu 06 Mar 2014 09:46:50 AM UTC
 ************************************************************************/
#include<cstdio>
#include<cstring>

int main()
{
	char str[] = "fcba73";
	char keys[] = "1234567890";
	int i;
	i = strcspn(str,keys);
	printf("The first number in str is at position %d.\n",i+1);
	return 0;
}

