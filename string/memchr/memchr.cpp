/*************************************************************************
	> File Name: memchr.cpp
	> Author: Pansj 
	> Mail: perry2008084@gmail.com 
	> Created Time: Wed 05 Mar 2014 10:13:08 PM UTC
	> Content: Locate character in block of memory.
 ************************************************************************/
#include <cstdio>
#include <cstring>

int main()
{
	char* pch;
	char str[] = "Example string";
	pch = (char*) memchr (str, 'p', strlen(str));
	if (pch != NULL) 
		printf("'p' found at position %d.\n", pch-str+1);
	else
		printf("'p' not found.\n");
	return 0;
}
