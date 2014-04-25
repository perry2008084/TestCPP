/*************************************************************************
	> File Name: join.cpp
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Fri 25 Apr 2014 08:21:51 PM CST
 ************************************************************************/

#include<iostream>
#include<thread>
#include<chrono>

using namespace std;

void pause_thread(int n)
{
	this_thread::sleep_for(chrono::seconds(n));
	cout << "pause of " << n << " seconds ended\n";
}

int main()
{
	cout << "Spawing 3 threads...\n";
	thread t1(pause_thread,1);
	thread t2(pause_thread,2);
	thread t3(pause_thread,3);
	cout << "Done spawing threads. Now waiting for them to join;\n";
	t1.join();
	t2.join();
	t3.join();
	cout << "All threads joined!\n";

	return 0;
}

