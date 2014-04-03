/*************************************************************************
	> File Name: front.cpp
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Thu 03 Apr 2014 09:33:38 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> myvector;

	myvector.push_back(78);
	myvector.push_back(16);

	myvector.front() -= myvector.back();

	cout << "myvector.front() is now " << myvector.front() << '\n';

	return 0;
}
