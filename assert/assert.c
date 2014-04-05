/*************************************************************************
	> File Name: assert.c
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Sat 05 Apr 2014 11:58:46 AM CST
 ************************************************************************/

#include<stdio.h>
#include<assert.h>

void print_number(int* myInt)
{
	assert(myInt != NULL);
	printf("%d\n",*myInt);
}

int main()
{
	int a = 10;
	int *b = NULL;
	int *c = NULL;

	b = &a;
	
	print_number(b);
	print_number(c);

	return 0;
}

