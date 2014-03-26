/*************************************************************************
	> File Name: size.cpp
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Wed 26 Mar 2014 08:18:40 PM CST
 ************************************************************************/

#include<iostream>
#include<stack>

using namespace std;

int main()
{
	std::stack<int> myints;
	cout << "0. size: " << myints.size() << '\n';

	for (int i = 0; i < 5; ++i) myints.push(i);
	cout << "1. size: " << myints.size() << '\n';

	myints.pop();
	cout << "2. size: " << myints.size() << '\n';

	return 0;
}

