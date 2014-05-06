/*************************************************************************
	> File Name: begin.cpp
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Tue 06 May 2014 09:22:39 PM CST
 ************************************************************************/

#include<iostream>
#include<map>

using namespace std;

int main()
{
	map<char, int> mymap;
	map<char, int>::iterator it;
	
	mymap['b'] = 100;
	mymap['a'] = 200;
	mymap['c'] = 300;

	for (map<char,int>::iterator it = mymap.begin(); it != mymap.end(); ++it)
		cout << it->first << " => " << it->second << '\n';

	return 0;
}

