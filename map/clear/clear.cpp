/*************************************************************************
	> File Name: clear.cpp
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Wed 07 May 2014 10:53:57 PM CST
 ************************************************************************/

#include<iostream>
#include<map>

using namespace std;

int main()
{
	map<char, int> mymap;

	mymap['x'] = 100;
	mymap['y'] = 200;
	mymap['z'] = 300;

	cout << "mymap contains:\n";
	for (map<char,int>::iterator it = mymap.begin(); it!=mymap.end(); ++it)
		cout << it->first << " => " << it->second << '\n';

	mymap.clear();
	mymap['a'] = 1101;
	mymap['b'] = 2202;

	cout << "mymap contains:\n";
	for (map<char, int>::iterator it = mymap.begin(); it!=mymap.end(); ++it)
		cout << it->first << " => " << it->second << '\n';

	return 0;
}

