/*************************************************************************
	> File Name: bubbleSort.cpp
	> Author: Pansj 
	> Mail: perry2008084@gmail.com 
	> Created Time: Sun 09 Mar 2014 12:28:49 AM UTC
 ************************************************************************/
#include<iostream>

using namespace std;

void swap(int array[], int i, int j)
{
	int tmp = 0;
	tmp = array[i];
	array[i] = array[j];
	array[j] = tmp;
}

void bubbleSort(int array[], int size)
{
	for (int i = 0; i < size; i++) {
		for (int j = size - 1; j > 0; j--) {
			if (array[j] < array[j-1])
				swap(array, j, j-1);
		}
	}
}

int main()
{
	int arr[] = {15,2,30,4,90};
	bubbleSort(arr,5);
	for (int i = 0; i < 5; i++)
		cout << arr[i] << " ";
	cout << endl;

	return 0;
}
