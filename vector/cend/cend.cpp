/*************************************************************************
	> File Name: cend.cpp
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Thu 27 Mar 2014 05:39:22 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	std::vector<int> myvector = {10,20,30,40,50};

	cout << "myvector contains:";

	for (auto it = myvector.cbegin(); it != myvector.cend(); ++it)
		cout << ' ' << *it;
	cout << '\n';

	return 0;
}

