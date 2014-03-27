/*************************************************************************
	> File Name: clear.cpp
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Thu 27 Mar 2014 05:43:05 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	std::vector<int> myvector;
	myvector.push_back(100);
	myvector.push_back(200);
	myvector.push_back(300);

	cout << "myvector contians:";
	for (unsigned i = 0; i < myvector.size(); i++)
		cout << ' ' << myvector[i];
	cout << '\n';

	myvector.clear();
	myvector.push_back(1101);
	myvector.push_back(2202);

	cout << "myvector contians:";
	for (unsigned i = 0; i < myvector.size(); i++)
		cout << ' ' << myvector[i];
	cout << '\n';

	return 0;
}

