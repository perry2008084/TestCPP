/*************************************************************************
	> File Name: top.cpp
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Wed 26 Mar 2014 08:26:51 PM CST
 ************************************************************************/

#include<iostream>
#include<stack>

using namespace std;

int main()
{
	std::stack<int> mystack;

	mystack.push(10);
	mystack.push(20);

	mystack.top() -= 5;

	cout << "mystack.top() is now " << mystack.top() << '\n';

	return 0;
}
