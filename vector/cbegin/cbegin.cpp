/*************************************************************************
	> File Name: cbegin.cpp
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Fri 21 Mar 2014 02:46:31 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> myvector = {10,20,30,40,50};

	cout << "myvector contains:";

	for (auto it = myvector.cbegin(); it != myvector.cend(); ++it)
		cout << ' ' << *it;
	cout << '\n';

	return 0;
}

