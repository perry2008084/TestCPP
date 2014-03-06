/*************************************************************************
	> File Name: strerror.cpp
	> Author: Pansj 
	> Mail: perry2008084@gmail.com 
	> Created Time: Thu 06 Mar 2014 09:50:47 AM UTC
 ************************************************************************/
#include<cstdio>
#include<cstring>
#include<cerrno>

int main()
{
	FILE * pFile;
	pFile = fopen("unexist.ent","r");
	if (pFile == NULL) 
		printf("Error opening file unexist. ent: %s\n", strerror(errno));
	return 0;
}

