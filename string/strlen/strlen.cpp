/*************************************************************************
	> File Name: strlen.cpp
	> Author: Pansj 
	> Mail: perry2008084@gmail.com 
	> Created Time: Thu 06 Mar 2014 10:46:46 PM UTC
 ************************************************************************/
#include<cstdio>
#include<cstring>

int main()
{
	char szInput[256];
	printf("Enter a sentence: ");
	gets(szInput);
	printf("The sentence entered is %u characters long.\n", (unsigned)strlen(szInput));
	return 0;
}

