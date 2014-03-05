/*************************************************************************
	> File Name: memcmp.cpp
	> Author: Pansj 
	> Mail: perry2008084@gmail.com 
	> Created Time: Wed 05 Mar 2014 10:21:18 PM UTC
 ************************************************************************/
#include<cstdio>
#include<cstring>

int main()
{
	char buffer1[] = "DWGaOtP12df0";
	char buffer2[] = "DWgAOTP12DFO";

	int n;

	n = memcmp(buffer1, buffer2, sizeof(buffer1));

	if (n>0) printf("'%s' is greater than '%s'.\n",buffer1,buffer2);
	else if(n<0) printf("'%s', is less than '%s'.\n",buffer1,buffer2);
	else printf("'%s' is the same as '%s'.\n",buffer1,buffer2);

	return 0;
}

