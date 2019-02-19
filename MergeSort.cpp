// MergeSort.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"
#include <iostream>
void MergeSort(int[], int, int);
void merge(int[], int, int, int, int);
using namespace std;
int main()
{
	int arr[] = { 5,4,9,0,11,6,8 };
	int last_index = 6;
	int initial = 0;
	MergeSort(arr,initial,last_index);
	for (int i = 0; i < last_index+1; i++)
	{
		cout << arr[i] << " ";
	}
}
void MergeSort(int a[], int l, int h)
{
	if (h-l>=1)
	{
		int end1 = (h + l) / 2;
		MergeSort(a, l, end1);
		MergeSort(a, end1+1, h);
		merge(a, l, end1, end1+1, h);
	}
}
void merge(int a[], int l1, int h1, int l2, int h2)
{
	int i = l1;
	int left = l1;
	int left2 = l2;
	int result[7];
	while (left <= h1 && left2 <= h2)
	{
		if (a[left] <=a[left2])
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
	if (left > h1)
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
		while (left<=h1)
		{
			result[i++] = a[left++];
			i = i + 1;
			left = left + 1;
		}
	}
	for (int j = l1; j <=h2; j++)
	{
		a[j] = result[j];
	}
}