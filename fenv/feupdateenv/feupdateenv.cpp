/*************************************************************************
	> File Name: feupdateenv.cpp
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Tue 15 Apr 2014 10:04:53 AM CST
 ************************************************************************/

#include<stdio.h>
#include<fenv.h>
#include<math.h>
#pragma STDC FENV_ACCESS On

double log_zerook(double x)
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
	feclearexcept(FE_ALL_EXCEPT);
	printf("log(0.0): %f\n", log_zerook(0.0));
	if (!fetestexcept(FE_ALL_EXCEPT))
		puts("no exceptions raised");
	return 0;
}
