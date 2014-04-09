/*************************************************************************
	> File Name: fegetround.c
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Wed 09 Apr 2014 11:14:54 PM CST
 ************************************************************************/

#include<stdio.h>
#include<fenv.h>
#include<math.h>

int main()
{
	printf("rounding using ");
	switch (fegetround()) {
		case FE_DOWNWARD: printf("downward"); break;
		case FE_TONEAREST: printf("to-nearest"); break;
		case FE_TOWARDZERO: printf("toward-zero"); break;
		case FE_UPWARD: printf("upward"); break;
		default: printf("unknown");
	}

	printf(" rounding:\n");

	printf("rint (2.3) = %.1f\n", rint(2.3) );
	printf("rint (3.8) = %.1f\n", rint(3.8) );
	printf("rint (-2.3) = %.1f\n", rint(-2.3) );
	printf("rint (-3.8) = %.1f\n", rint(-3.8) );

	return 0;
}

