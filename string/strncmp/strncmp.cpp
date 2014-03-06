/*************************************************************************
	> File Name: strncmp.cpp
	> Author: Pansj 
	> Mail: perry2008084@gmail.com 
	> Created Time: Thu 06 Mar 2014 10:55:23 PM UTC
 ************************************************************************/
#include<cstdio>
#include<cstring>

int main()
{
	char str[][5] = { "R2D2", "C3P0", "R2A6" };
	int n;
	puts("Looking for R2 astromech droids...");
	for (n=0; n<3; n++)
		if (strncmp(str[n],"R2xx",2) == 0) {
			printf("found %s\n",str[n]);
		}
	return 0;
}

