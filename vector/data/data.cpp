/*************************************************************************
	> File Name: data.cpp
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Tue 01 Apr 2014 10:00:15 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	std::vector<int> myvector (5);

	int* p = myvector.data();

	*p = 10;
	++p;
	*p = 20;
	p[2] = 100;

	cout << "myvector contains: ";
	for (unsigned i = 0; i < myvector.size(); ++i)
		cout << ' ' << myvector[i];
	cout << '\n';

	return 0;

}

