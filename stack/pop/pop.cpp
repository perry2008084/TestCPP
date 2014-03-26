/*************************************************************************
	> File Name: pop.cpp
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Wed 26 Mar 2014 08:13:40 PM CST
 ************************************************************************/

#include<iostream>
#include<stack>

using namespace std;

int main()
{
	std::stack<int> mystack;

	for (int i = 0; i < 5; ++i) mystack.push(i);

	cout << "Popping out elements...";
	while(!mystack.empty()) {
		cout << ' ' << mystack.top();
		mystack.pop();
	}

	cout << '\n';

	return 0;
}
