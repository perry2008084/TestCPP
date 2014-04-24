/*************************************************************************
	> File Name: thread.cpp
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Thu 24 Apr 2014 10:46:24 PM CST
 ************************************************************************/

#include<iostream>
#include<thread>

using namespace std;

void foo()
{

}

void bar(int x)
{

}

int main()
{
	thread first(foo);
	thread second(bar,0);

	cout << "main, foo and bar now excute concurrently...\n";

	// synchronize threads
	first.join();  // pauses until first finishes
	second.join(); // pauses until second finishes

	cout << "foo and bar completed.\n";

	return 0;
}
