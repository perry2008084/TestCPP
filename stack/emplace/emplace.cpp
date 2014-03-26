/*************************************************************************
	> File Name: emplace.cpp
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Wed 26 Mar 2014 05:01:09 PM CST
 ************************************************************************/

#include<iostream> // std::cin, std::cout
#include<stack> // std::stack
#include<string> // std::string, std::getline(string)

using namespace std;

int main()
{
	std::stack<std::string> mystack;

	mystack.emplace("First sentence");
	mystack.emplace("Second sentence");

	cout << "mystack contains:\n";
	while (!mystack.empty())
	{
		cout << mystack.top() << '\n';
		mystack.pop();
	}

	return 0;
}

