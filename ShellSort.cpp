// ShellSort


#include "pch.h"
#include <iostream>
void ShellSort(int[], int);
using namespace std;
int main()
{
	int a[] = { 8,14,18,19,37,23,40,29,30,11 };
	int size = 9;
	ShellSort(a, size);
	for(int i=0;i<size+1;i++)
	{
		cout << a[i] << " ";
	}
}
void ShellSort(int arr[], int len)
{
	int x = len / 2;
	while (x > 0)
	{
		for (int i = 0; i < len + 1 - x; i++)
		{
			for (int j = i + x; j > x; j = j - x)
			{
				if (arr[j - x] > arr[j])
				{
					int temp = arr[j];
					arr[j] = arr[j - x];
					arr[j - x] = temp;
				}
			}
		}
		x = x / 2;
	}
}
