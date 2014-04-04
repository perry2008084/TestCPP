/*************************************************************************
	> File Name: operatorEqual.cpp
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Fri 04 Apr 2014 09:58:14 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> foo(3,0);
	vector<int> bar(5,0);

	bar = foo;
	foo = vector<int>();

	cout << "Size of foo: " << int(foo.size()) << '\n';
	cout << "Size of bar: " << int(bar.size()) << '\n';

	return 0;
}

