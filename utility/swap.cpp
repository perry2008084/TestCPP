/*************************************************************************
	> File Name: swap.cpp
	> Author: Pansj 
	> Mail: perry2008084@gmail.com 
	> Created Time: Sat 08 Mar 2014 10:02:15 AM UTC
 ************************************************************************/
#include <iostream>
#include <utility>

int main()
{
	int x = 10, y = 20;
	std::swap(x,y);

	int foo[4];
	int bar[] = {10,20,30,40};
	std::swap(foo,bar);

	std::cout << "foo contains:";
	for (int i: foo) std::cout <<' ' << i;
	std::cout <<'\n';

	return 0;
}
