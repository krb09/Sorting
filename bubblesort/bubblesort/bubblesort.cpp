// bubblesort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
	int a[] = {1,4,2,5,6,3,8,7,9};
	int size = 9; 
	int flag = 1;
	for (int i = 0; (i < size - 2) && flag == 1; i++)
	{
		flag = 0;
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				int temp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = temp;
				flag = 1;
			}
		}
	}
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}
}