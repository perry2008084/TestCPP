/*************************************************************************
	> File Name: max_size.cpp
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Fri 04 Apr 2014 09:00:57 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> myvector;

	for (int i = 0; i < 100; i++)
		myvector.push_back(i);

	cout << "size: " << myvector.size() << '\n';
	cout << "capacity: " << myvector.capacity() << '\n';
	cout << "max_size: " << myvector.max_size() << '\n';

	return 0;
}

