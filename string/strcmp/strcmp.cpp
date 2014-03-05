/*************************************************************************
	> File Name: strcmp.cpp
	> Author: Pansj 
	> Mail: perry2008084@gmail.com 
	> Created Time: Wed 05 Mar 2014 11:31:54 PM UTC
 ************************************************************************/
#include<cstdio>
#include<cstring>

int main()
{
	char szKey[] = "apple\n";
	char szInput[80];
	do {
		printf("Guess my favorite fruit? ");
		fgets(szInput,80,stdin);
	} while(strcmp (szKey,szInput) != 0);
	puts("Correct answer!");
	return 0;
}

