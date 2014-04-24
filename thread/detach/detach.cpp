/*************************************************************************
	> File Name: detach.cpp
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Thu 24 Apr 2014 10:57:47 PM CST
 ************************************************************************/

#include<iostream>
#include<thread>
#include<chrono>

using namespace std;

void pause_thread(int n)
{
	this_thread::sleep_for (chrono::seconds(n));
	cout <<"pause of " << n << "seconds ended\n";
}

int main()
{
	cout << "Spwning and detaching 3 threads...\n";
	thread(pause_thread,1).detach();
	thread(pause_thread,2).detach();
	thread(pause_thread,3).detach();
	cout << "Done spawing threads.\n";

	cout << "(the main thread will now pause for 5 seconds)\n";

	// give the detached threads time to finish(but not guaranteed!)
	pause_thread(5);

	return 0;
}

