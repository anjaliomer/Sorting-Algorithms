#include "stdafx.h"
#include "insertion_sort.h"
#include<iostream>

using namespace std;

void insertion_sort(int ar[], int size)
{
	print_array(ar, size);
	for (int i = 1;i < size;i++)
	{
		int key = ar[i];
		int j = i - 1;
		while (j >= 0 && ar[j] > key)
		{
			ar[j + 1] = ar[j];
			j = j - 1;
		}
		ar[j + 1] = key;
	}
	print_array(ar, size);
}

void print_array(int ar[], int size)
{
	for (int i = 0; i < size;i++)
	{
		cout << ar[i] << " ";
	}
	cout << "\n";
}