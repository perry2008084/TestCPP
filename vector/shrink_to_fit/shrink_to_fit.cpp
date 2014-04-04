/*************************************************************************
	> File Name: shrink_to_fit.cpp
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Fri 04 Apr 2014 10:47:37 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> myvector(100);
	cout << "1. capacity of myvector: " << myvector.capacity() << '\n';

	myvector.resize(10);
	cout << "2. capacity of myvector: " << myvector.capacity() << '\n';

	myvector.shrink_to_fit();
	cout << "3. capacity of myvector: " << myvector.capacity() << '\n'
;
	
	return 0;
}

