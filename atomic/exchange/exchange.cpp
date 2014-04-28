/*************************************************************************
	> File Name: exchange.cpp
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Mon 28 Apr 2014 09:05:21 PM CST
 ************************************************************************/

#include<iostream>
#include<atomic>
#include<thread>
#include<vector>

using namespace std;

atomic<bool> ready(false);
atomic<bool> winner(false);

void count1m(int id)
{
	while (!ready) {}

	for (int i = 0; i < 1000000; ++i) {}

	if (!winner.exchange(true)) {
		cout << "thread #" << id << " won!\n"; 
	}
}

int main()
{
	vector<thread> threads;
	cout << "spawing 10 threads that count to 1 million...\n";
	for (int i = 1; i <= 10; ++i)
		threads.push_back(thread(count1m,i));
	ready = true;

	for (auto& th : threads)
		th.join();

	return 0;
}

