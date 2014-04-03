/*************************************************************************
	> File Name: emplace_back.cpp
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Thu 03 Apr 2014 09:19:18 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> myvector = {10, 20, 30};

	myvector.emplace_back(100);
	myvector.emplace_back(200);

	cout << "myvector contains:";
	for (auto& x: myvector)
		cout << ' ' << x;
	cout << '\n';

	return 0;
}

