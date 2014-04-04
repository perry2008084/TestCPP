/*************************************************************************
	> File Name: operatorAccess.cpp
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Fri 04 Apr 2014 10:02:07 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> myvector(10);

	vector<int>::size_type sz = myvector.size();

	for (unsigned i = 0; i < sz; i++)
		myvector[i] = i;

	for (unsigned i = 0; i < sz/2; i++)
	{
		int temp;
		temp = myvector[sz-1-i];
		myvector[sz-1-i] = myvector[i];
		myvector[i] = temp;
	}

	cout << "myvector contains:";
	for (unsigned i = 0; i < sz; i++)
		cout << ' ' << myvector[i];
	cout << '\n';

	return 0;
}

