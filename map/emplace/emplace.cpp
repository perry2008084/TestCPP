/*************************************************************************
	> File Name: emplace.cpp
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Thu 08 May 2014 09:49:45 PM CST
 ************************************************************************/

#include<iostream>
#include<map>

using namespace std;

int main()
{
	map<char, int> mymap;
	
	mymap.emplace('x', 100);
	mymap.emplace('y', 200);
	mymap.emplace('z', 100);

	cout << "mymap contains:";
	for (auto& x: mymap)
		cout << "[" << x.first << ':' << x.second << ']';
	cout << '\n';

	return 0;
}

