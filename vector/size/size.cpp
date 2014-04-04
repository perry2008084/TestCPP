/*************************************************************************
	> File Name: size.cpp
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Fri 04 Apr 2014 10:54:33 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> myints;
	cout << "0. size: " << myints.size() << '\n';

	for (int i = 0; i < 10; i++)
		myints.push_back(i);
	cout << "1. size: " << myints.size() << '\n';

	myints.insert(myints.end(), 10, 100);
	cout << "2. size: " << myints.size() << '\n';

	myints.pop_back();
	cout << "3. size: " << myints.size() << '\n';

	return 0;
}

