/*************************************************************************
	> File Name: pop_back.cpp
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Fri 04 Apr 2014 10:07:54 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> myvector;
	int sum(0);
	myvector.push_back(100);
	myvector.push_back(200);
	myvector.push_back(300);

	while (!myvector.empty()) {
		sum += myvector.back();
		myvector.pop_back();
	}

	cout << "The elements of myvector add up to " << sum << '\n';

	return 0;
}

