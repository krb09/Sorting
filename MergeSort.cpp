// MergeSort.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"
#include <iostream>
void MergeSort(int[], int, int);
void merge(int[], int, int, int, int);
using namespace std;
int main()
{
	int arr[] = { 5,8,1,7,0,4,3,2,9,6 };
	int last_index = 9;
	int initial = 0;
	MergeSort(arr, initial, last_index);
	for (int i = 0; i < last_index + 1; i++)
	{
		cout << arr[i] << " ";
	}
}
void MergeSort(int a[], int l, int h)
{
	if (h - l > 0)										//the length is greater than 0;
	{
		int end1 = (h + l) / 2;
		MergeSort(a, l, end1);
		MergeSort(a, end1 + 1, h);
		merge(a, l, end1, end1 + 1, h);
	}
}
void merge(int a[], int l1, int h1, int l2, int h2)				//(arr,0,end1,start2,len)
{
	int i = l1;
	int left = l1;
	int left2 = l2;
	int result[10] = { 0 };
	while (left <= h1 && left2 <= h2)
	{
		if (a[left] <= a[left2])
		{
			result[i] = a[left];
			left = left + 1;
		}
		else
		{
			result[i] = a[left2];
			left2 = left2 + 1;
		}
		i++;
	}
	if (left == l2)
	{
		while (left2 <= h2)
		{
			result[i] = a[left2];
			i = i + 1;
			left2 = left2 + 1;
		}
	}
	else
	{
		while (left <= h1)
		{
			result[i] = a[left];
			i = i + 1;
			left = left + 1;
		}
	}
	for (int j = l1; j <= h2; j++)
	{
		a[j] = result[j];
	}
}