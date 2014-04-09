/*************************************************************************
	> File Name: feclearexcept.c
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Wed 09 Apr 2014 10:59:39 PM CST
 ************************************************************************/

#include<cstdio>
#include<cmath>
#include<cfenv>

#pragma STDC FENV_ACCESS on

int main()
{
	feclearexcept(FE_ALL_EXCEPT);
	sqrt(-1);
	if (fetestexcept(FE_INVALID))
		printf ("sqrt(-1) raise FE_INVALID\n");

	return 0;
}

