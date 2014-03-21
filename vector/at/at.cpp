/*************************************************************************
	> File Name: at.cpp
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Fri 21 Mar 2014 01:11:48 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> myvector(10); // 10 zero-initialized ints

	// assign some values:
	for (unsigned i = 0; i < myvector.size(); i++)
		myvector.at(i) = i;

	cout << "myvector constains:";
	for (unsigned i = 0; i < myvector.size(); i++)
		cout << ' ' << myvector.at(i);
	cout << '\n';

	return 0;
}

