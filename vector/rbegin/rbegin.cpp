/*************************************************************************
	> File Name: rbegin.cpp
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Fri 04 Apr 2014 10:23:15 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> myvector(5);

	vector<int>::reverse_iterator rit = myvector.rbegin();

	int i = 0;
	for (rit = myvector.rbegin(); rit != myvector.rend(); ++rit)
		*rit = ++i;

	cout << "myvector contains: ";

	for (vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
		cout << ' ' << *it;
	cout << '\n';

	return 0;
}

