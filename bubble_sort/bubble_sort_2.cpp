/*************************************************************************
	> File Name: bubble_sort_2.cpp
	> Author: Pansj 
	> Mail: perry2008084@gmail.com 
	> Created Time: Tue 04 Mar 2014 12:11:52 AM UTC
 ************************************************************************/
#include<iostream>

using namespace std;

void bubble_sort(int d[], int size)
{
	int exchange = size - 1;

	while(exchange) {
		int bound = exchange;
		exchange = 0;

		for (int i = 0; i < bound; i++) {
			if (d[i] > d[i+1]) {
				int t = d[i];
				d[i] = d[i+1];
				d[i+1] = t;

				exchange = i;
			}
		}
	}
}

int main()
{
	int a[] = {3, 5, 3, 6, 4, 7, 5, 7, 4};
	bubble_sort(a, sizeof(a) / sizeof(*a));

	for (int i = 0; i < sizeof(a) / sizeof(*a); i++) 
		cout << a[i] << ' ';
	cout << endl;

	return 0;
}
