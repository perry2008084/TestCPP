/*************************************************************************
	> File Name: cend.cpp
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Tue 06 May 2014 09:27:25 PM CST
 ************************************************************************/

#include<iostream>
#include<map>

using namespace std;

int main()
{
	map<char, int> mymap;

	mymap['b'] = 100;
	mymap['a'] = 200;
	mymap['c'] = 300;

	cout << "mymap contains:";
	for (auto it = mymap.cbegin(); it != mymap.cend(); ++it)
		cout << "[" << (*it).first << ':' << (*it).second << ']';

	cout << '\n';

	return 0;
}
