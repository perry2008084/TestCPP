/*************************************************************************
	> File Name: length.cpp
	> Author: Pansj 
	> Mail: perry2008084@gmail.com 
	> Created Time: Thu 06 Mar 2014 09:41:05 AM UTC
 ************************************************************************/
#include<iostream>
#include<string>

int main()
{
	const char* foo = "String literal";
	std::cout << "foo has a length of ";
	std::cout << std::char_traits<char>::length(foo);
	std::cout << " characters.\n";
	return 0;
}

