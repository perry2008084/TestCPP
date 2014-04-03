/*************************************************************************
	> File Name: empty.cpp
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Thu 03 Apr 2014 09:21:50 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> myvector;
	int sum(0);

	for (int i = 1; i <= 10; i++)
		myvector.push_back(i);

	while (!myvector.empty()) {
		sum += myvector.back();
		myvector.pop_back();
	}

	cout << "total: " << sum << '\n';

	return 0;
}
