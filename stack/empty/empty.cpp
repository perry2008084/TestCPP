/*************************************************************************
	> File Name: empty.cpp
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Wed 26 Mar 2014 08:10:26 PM CST
 ************************************************************************/

#include<iostream>
#include<stack>

using namespace std;

int main()
{
	std::stack<int> mystack;
	int sum(0);

	for (int i = 1; i <= 10; i++) mystack.push(i);

	while (!mystack.empty()) {
		sum += mystack.top();
		mystack.pop();
	}

	cout << "total: " << sum << '\n';

	return 0;
}

