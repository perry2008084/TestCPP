/*************************************************************************
	> File Name: strchr.cpp
	> Author: Pansj 
	> Mail: perry2008084@gmail.com 
	> Created Time: Wed 05 Mar 2014 11:26:14 PM UTC
 ************************************************************************/
#include<cstdio>
#include<cstring>

int main()
{
	char str[] = "This is a sample string";
	char* pch;
	printf("Looking for the 's' character in \"%s\"...\n",str);
	pch = strchr(str,'s');
	while(pch!=NULL) {
		printf("found at %d\n",pch-str+1);
		pch=strchr(pch+1,'s');
	}
	return 0;
}

