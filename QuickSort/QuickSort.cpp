// QuickSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
void quicksort(int[], int, int);
int partition(int [], int, int);
int main()
{
	int x[] = { 98,32,45,99,101,73,67 };
	int left = 0;
	int right = 6;
	quicksort(x, left, right);
	for (int i = 0; i < 7; i++)
	{
		cout << x[i] << " ";
	}
}

int partition(int a[], int l, int r)
{
	int pivot = a[l];
	while (l < r)
	{
		while (l<r && a[r]>pivot)
			r--;											//why r-- and not --r is the question
		if (l != r)											// when you find smallest on the right side
		{
			a[l] = a[r];
			l++;
		}
		while (l<r && a[l]<pivot)							//until you get smaller values, its okay
			l++;
		if (l != r)										// when you see a value bigger than pivot
		{
			a[r] = a[l];
			r--;
		}
	}
	a[l] = pivot;
	return l;
}

void quicksort(int a[], int l, int r)
{
	int pivot = partition(a, l, r);
	if (l < pivot)
		quicksort(a, l, pivot - 1);
	if (r > pivot)
		quicksort(a, pivot + 1, r);
	return;
}