/*************************************************************************
	> File Name: count.cpp
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Wed 07 May 2014 10:59:54 PM CST
 ************************************************************************/

#include<iostream>
#include<map>

using namespace std;

int main()
{
	map<char, int> mymap;
	char c;

	mymap['a'] = 101;
	mymap['c'] = 202;
	mymap['f'] = 303;

	for (c='a'; c<'h'; c++)
	{
		cout << c;
		if (mymap.count(c)>0)
			cout << " is an element of mymap.\n";
		else
			cout << " is not an element of mymap.\n";
	}

	return 0;
}

