#include"stdafx.h"
#include"insertion_sort_recursive.h"
#include<iostream>

using namespace std;

void insertion_sort(int ar[], int size)
{
	if (size <= 1)
		return;

	insertion_sort(ar, size - 1);

	int last = ar[size - 1];
	int j = size - 2;
	while (j >= 0 && ar[j] > last)
	{
		ar[j + 1] = ar[j];
		j--;
	}
	ar[j + 1] = last;
}

void print_array(int ar[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << ar[i] << " ";
	}
	cout << "\n";
}

