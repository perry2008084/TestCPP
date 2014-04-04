/*************************************************************************
	> File Name: reserve.cpp
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Fri 04 Apr 2014 10:37:55 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int>::size_type sz;

	vector<int> foo;
	sz = foo.capacity();
	cout << "making foo grow:\n";
	for (int i = 0; i < 100; ++i) {
		foo.push_back(i);
		if (sz != foo.capacity()) {
			sz = foo.capacity();
			cout << "capacity changed: " << sz << '\n';
		}
	}

	vector<int> bar;
	sz = bar.capacity();
	bar.reserve(100);
	cout << "making bar grow:\n";
	for (int i = 0; i < 100; i++) {
		bar.push_back(i);
		if (sz != bar.capacity()) {
			sz = bar.capacity();
			cout << "capacity changed: " << sz << '\n';
		}
	}

	return 0;
}

