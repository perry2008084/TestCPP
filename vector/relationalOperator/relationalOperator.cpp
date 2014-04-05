/*************************************************************************
	> File Name: relationalOperator.cpp
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Sat 05 Apr 2014 11:43:30 AM CST
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> foo(3,100);
	vector<int> bar(2,200);

	if (foo == bar)
		cout << "foo and bar are equal\n";
	if (foo != bar)
		cout << "foo and bar are not equal\n";
	if (foo < bar)
		cout << "foo is less than bar\n";
	if (foo > bar)
		cout << "foo is greater than bar\n";
	if (foo <= bar)
		cout << "foo is less than or equal to bar\n";
	if (foo >= bar)
		cout << "foo is greater than or equal to bar\n";

	return 0;
}

