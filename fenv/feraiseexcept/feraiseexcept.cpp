/*************************************************************************
	> File Name: feraiseexcept.cpp
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Thu 10 Apr 2014 11:51:27 AM CST
 ************************************************************************/

#include<stdio.h>
#include<fenv.h>
#pragma STDC FENV_ACCESS on

double fn (double x)
{
	if (x == 0.0)
		feraiseexcept(FE_INVALID);
	return x;
}

int main()
{
	feraiseexcept(FE_ALL_EXCEPT);
	fn(0.0);
	if (fetestexcept(FE_INVALID))
		printf("FE_INVALID raised\n");

	return 0;
}
