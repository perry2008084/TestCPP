/*************************************************************************
	> File Name: crbegin.cpp
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Thu 08 May 2014 09:40:27 PM CST
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

	cout << "mymap backwards:";

	for (auto rit = mymap.crbegin(); rit != mymap.crend(); ++rit)
		cout << " [" << rit->first << ':' << rit->second << ']';
	cout << '\n';

	return 0;
}
