/*************************************************************************
	> File Name: get_allocator.cpp
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Fri 04 Apr 2014 06:34:30 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> myvector;
	int *p;
	unsigned int i;

	p = myvector.get_allocator().allocate(5);

	for (i = 0; i < 5; i++)
		myvector.get_allocator().construct(&p[i],i);

	cout << "The allocated array contains:";
	for (i = 0; i < 5; i++)
		cout << ' ' << p[i];
	cout << '\n';

	for (i = 0; i < 5; i++)
		myvector.get_allocator().destroy(&p[i]);
	myvector.get_allocator().deallocate(p,5);

	return 0;
}

