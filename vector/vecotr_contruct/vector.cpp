/*************************************************************************
	> File Name: vector.cpp
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Fri 21 Mar 2014 10:21:40 AM CST
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	unsigned int i;

	// constructors used in the same order as described above:
	vector<int> first;	// empty vector of ints
	vector<int> second(4,100); // four ints with value 100
	vector<int> third(second.begin(), second.end()); // iterating through second
	vector<int> fourth(third); // a copy of third

	// the iterator constructor can also be used to construct from arrays
	int myints[] = {16,2,77,29};
	vector<int> fifth (myints, myints + sizeof(myints) / sizeof(int) );

	cout << "The contents of fifth are:";
	for(vector<int>::iterator it = fifth.begin(); it != fifth.end(); ++it)
		cout << ' ' << *it;
	cout << '\n';

	return 0;
}

