#include "stdafx.h"
#include "bubble_sort.h"
#include<iostream>

using namespace std;

void bubble_sort(int ar[], int size)
{
	print_array(ar, size);

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (ar[j] > ar[j + 1])
				swap(&ar[j], &ar[j + 1]);
		}
	}

	print_array(ar, size);
}

void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

void print_array(int ar[], int size)
{
	for (int i = 0; i < size;i++)
	{
		cout << ar[i] << " ";
	}
	cout << "\n";
}

