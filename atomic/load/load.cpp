/*************************************************************************
	> File Name: load.cpp
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Mon 28 Apr 2014 09:18:20 PM CST
 ************************************************************************/

#include<iostream>
#include<atomic>
#include<thread>

using namespace std;

atomic<int> foo (0);

void set_foo(int x)
{
	foo.store(x, memory_order_relaxed);
}

void print_foo()
{
	int x;
	do {
		x = foo.load(memory_order_relaxed);
	} while ( x == 0);

	cout << "foo: " << x << '\n';
}

int main()
{
	thread first(print_foo);
	thread second(set_foo, 10);
	first.join();
	second.join();
	return 0;
}

