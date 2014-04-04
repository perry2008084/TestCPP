/*************************************************************************
	> File Name: push_back.cpp
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Fri 04 Apr 2014 10:12:40 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> myvector;
	int myint;

	cout << "Please enter some integers (enter 0 to end):\n";

	do {
		cin >> myint;
		myvector.push_back(myint);
	} while (myint);

	cout << "myvector stores " << int(myvector.size()) << " numbers.\n";

	return 0;
}

