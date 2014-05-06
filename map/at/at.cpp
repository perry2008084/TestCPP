/*************************************************************************
	> File Name: at.cpp
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Tue 06 May 2014 09:17:06 PM CST
 ************************************************************************/

#include<iostream>
#include<string>
#include<map>

using namespace std;

int main()
{
	map<string, int> mymap = {
		{ "alpha", 0},
		{ "beta", 0},
		{ "gama", 0}
	};

	mymap.at("alpha") = 10;
	mymap.at("beta") = 20;
	mymap.at("gama") = 30;

	for (auto& x: mymap) {
		cout << x.first << ": " << x.second << '\n';
	}

	return 0;
}

