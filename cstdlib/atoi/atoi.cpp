/*************************************************************************
	> File Name: atoi.cpp
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Mon 17 Mar 2014 04:15:47 PM CST
 ************************************************************************/

#include<iostream>
#include<cstdlib>
#include<cstdio>

using namespace std;

int main()
{
	int i;
	char buffer[256];
	printf("Enter a number: ");
	fgets(buffer, 256, stdin);
	i = atoi(buffer);
	printf("The value Entered is %d. Its double is %d.\n",i,i*2);
	return 0;
}
