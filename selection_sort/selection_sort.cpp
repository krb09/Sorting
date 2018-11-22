// selection_sort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
	int a[] = {1,3,4,6,2,0,9,7,8,5,11,13,12,14,18,16,19};     //0123456789
	int size = 10;											 //1345209785
	for (int i = 0; i < 16; i++)
	{
		int minimum = *(a+i);
		int k=i;
		for (int j = i+1; j < 17; j++)
		{
			if (*(a+j) < minimum)
			{
				k = j;
			}
			minimum = *(a+k);
		}
		
		*(a+k) = *(a+i);
		*(a+i) = minimum;
	}
	for (int i = 0; i < 17; i++)
	{
		cout << *(a+i) << " ";
	}
}

