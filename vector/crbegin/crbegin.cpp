/*************************************************************************
	> File Name: crbegin.cpp
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Thu 27 Mar 2014 05:46:56 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	std::vector<int> myvector = {1,2,3,4,5};

	cout << "myvector backwards:";
	for (auto rit = myvector.crbegin(); rit != myvector.crend(); ++rit)
		cout << ' ' << *rit;
	cout << '\n';

	return 0;
}

