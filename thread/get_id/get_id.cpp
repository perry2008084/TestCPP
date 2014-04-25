/*************************************************************************
	> File Name: get_id.cpp
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Fri 25 Apr 2014 08:15:12 PM CST
 ************************************************************************/

#include<iostream>
#include<thread>
#include<chrono>

using namespace std;

thread::id main_thread_id = this_thread::get_id();

void is_main_thread() {
	if (main_thread_id == this_thread::get_id()) 
		cout << "This is the main thread.\n";
	else
		cout << "This is not the main thread.\n";
}

int main()
{
	is_main_thread();
	thread th(is_main_thread);
	th.join();
}
