/*************************************************************************
	> File Name: capacity.cpp
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Fri 21 Mar 2014 02:42:03 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> myvector;

	for (int i = 0; i < 100; i++)
		myvector.push_back(i);

	cout << "size: " << (int) myvector.size() << '\n';
	cout << "capacity: " << (int) myvector.capacity() << '\n';
	cout << "max_size: " << (int) myvector.max_size() << '\n';

	return 0;
}

