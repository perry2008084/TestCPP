/*************************************************************************
	> File Name: fetestexcept.cpp
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Tue 15 Apr 2014 09:55:11 AM CST
 ************************************************************************/

#include<stdio.h>
#include<fenv.h>

#pragma STDC FENV_ACCESS on

double fn(double x)
{
	if (x==0.0)
		feraiseexcept(FE_INVALID | FE_OVERFLOW);

	return x;
}

int main()
{
	int fe;

	feclearexcept(FE_ALL_EXCEPT);
	fn(0.0);

	if (fetestexcept(FE_OVERFLOW))
		puts("FE_OVERFLOW is set");

	fe = fetestexcept(FE_ALL_EXCEPT);

	puts("The following exceptions are set:");
	if (fe & FE_DIVBYZERO)
		puts("FE_DIVBYZERO");
	if (fe & FE_INEXACT)
		puts("FE_INEXACT");
	if (fe & FE_INVALID)
		puts("FE_INVALID");
	if (fe & FE_OVERFLOW)
		puts("FE_OVERFLOW");
	if (fe & FE_UNDERFLOW)
		puts("FE_UNDERFLOW");

	return 0;
}


