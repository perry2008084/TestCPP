/*************************************************************************
	> File Name: joinable.cpp
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Sun 27 Apr 2014 08:13:43 PM CST
 ************************************************************************/

#include<iostream>
#include<thread>

using namespace std;

void mythread()
{

}

int main()
{
	thread foo;
	thread bar(mythread);

	cout << "Joinable after construction;\n" << boolalpha;
	cout << "foo: " << foo.joinable() << '\n';
	cout << "bar: " << bar.joinable() << '\n';

	if (foo.joinable()) foo.join();
	if (bar.joinable()) bar.join();

	cout << "Joinable after joining:\n" << boolalpha;
	cout << "foo: " << foo.joinable() << '\n';
	cout << "bar: " << bar.joinable() << '\n';

	return 0;
}

