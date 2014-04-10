/*************************************************************************
	> File Name: feholdexcept.c
	> Author: Pansj 
	> Mail: perry2008084@gmail.com 
	> Created Time: Thu 10 Apr 2014 11:42:15 AM UTC
 ************************************************************************/
#include<stdio.h>
#include<fenv.h>
#include<math.h>

#pragma STDC FENV_ACCESS on

double log_zerook (double x) 
{
	fenv_t fe;
	feholdexcept(&fe);
	x = log(x);
	feclearexcept(FE_OVERFLOW | FE_DIVBYZERO);
	feupdateenv(&fe);
	return x;
}

int main()
{
	feclearexcept (FE_ALL_EXCEPT);
	printf("log(0.0): %f\n", log_zerook(0.0));
	if (!fetestexcept(FE_ALL_EXCEPT))
		puts("no exceptions raised");

	return 0;
}
