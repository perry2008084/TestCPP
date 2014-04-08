/*************************************************************************
	> File Name: isgraph.c
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Tue 08 Apr 2014 11:04:09 AM CST
 ************************************************************************/

#include<stdio.h>
#include<ctype.h>

int main()
{
	FILE * pFile;
	int c;
	pFile = fopen("myfile.txt","r");
	if (pFile) {
		do {
			c = fgetc(pFile);
			if (isgraph(c))
				putchar(c);
		} while (c != EOF);
		fclose (pFile);
	}

	return 0;
}

