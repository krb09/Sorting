// InsertionSort

#include "pch.h"
#include <iostream>
using namespace std;

void InsertionSort(int[], int);

int main()
{
	int a[] = { 2,3,10,7,4,0 };
	int size = 6;
	InsertionSort(a, size);
	for (int i = 0; i < size; i++)
	{
		cout << a[i]<<" ";
	}
	return 0;
}

void InsertionSort(int x[], int n)
{
	int temp, loc, i;
	for (i = 1; i < n; i++)
	{
		temp = x[i];
		loc = i;
		while (loc != 0 && x[loc - 1] > temp)
		{
			x[loc] = x[loc - 1];
			--loc;
		}
		x[loc] = temp;
	}
}