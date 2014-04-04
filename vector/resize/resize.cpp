/*************************************************************************
	> File Name: resize.cpp
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Fri 04 Apr 2014 10:43:51 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> myvector;

	for (int i = 1; i < 10; i++)
		myvector.push_back(i);

	myvector.resize(5);
	myvector.resize(8,100);
	myvector.resize(12);

	cout << "myvector contains:";
	for (int i = 0; i < myvector.size(); i++)
		cout << ' ' << myvector[i];
	cout << '\n';

	return 0;
}

