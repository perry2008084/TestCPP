/*************************************************************************
	> File Name: map.cpp
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Mon 21 Apr 2014 10:17:16 PM CST
 ************************************************************************/

#include<iostream>
#include<map>

using namespace std;

bool fncomp(char lhs, char rhs)
{
	return lhs < rhs;
}

struct classcomp {
	bool operator() (const char& lhs, const char& rhs) const
	{
		return lhs < rhs;
	}
};

int main()
{
	map<char, int> first;

	first['a'] = 10;
	first['b'] = 30;
	first['c'] = 50;
	first['d'] = 70;

	map<char,int> second(first.begin(),first.end());

	map<char,int> third(second);
	
	map<char,int,classcomp> fourth;

	bool(*fn_pt)(char,char) = fncomp;
	map<char,int,bool(*)(char,char)> fifth(fn_pt);

	return 0;
}
