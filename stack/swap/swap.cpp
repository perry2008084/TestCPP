/*************************************************************************
	> File Name: swap.cpp
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Wed 26 Mar 2014 08:22:22 PM CST
 ************************************************************************/

#include<iostream>
#include<stack>

using namespace std;

int main()
{
	std::stack<int> foo,bar;
	foo.push(10); foo.push(20);foo.push(30);
	bar.push(111); bar.push(222);

	foo.swap(bar);

	cout << "size of foo: " << foo.size() << '\n';
	cout << "size of bar: " << bar.size() << '\n';

	return 0;
}

