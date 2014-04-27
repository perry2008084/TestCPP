/*************************************************************************
	> File Name: operator.cpp
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Sun 27 Apr 2014 08:36:56 PM CST
 ************************************************************************/

#include<iostream>
#include<thread>
#include<chrono>

using namespace std;

void pause_thread(int n)
{
	this_thread::sleep_for(chrono::seconds(n));
	cout << "pause of " << n << "seconds ended\n";
}

int main()
{
	thread threads[5];

	cout << "Spawning 5 threads...\n";
	for (int i = 0; i < 5; ++i)
		threads[i] = thread(pause_thread,i+1);

	cout << "Done Spawning threads. Now waiting for them to joing:\n";
	for (int i = 0; i < 5; ++i)
		threads[i].join();

	cout << "All threads joined!\n";

	return 0;
}

