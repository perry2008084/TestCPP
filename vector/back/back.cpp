/*************************************************************************
	> File Name: back.cpp
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Fri 21 Mar 2014 01:18:45 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> myvector;

	myvector.push_back(10);

	while(myvector.back() != 0) {
		myvector.push_back(myvector.back() - 1);
	}

	cout << "myvector contains:";
	for (unsigned i = 0; i < myvector.size(); i++)
		cout << ' ' << myvector[i];
	cout << '\n';

	return 0;
}

