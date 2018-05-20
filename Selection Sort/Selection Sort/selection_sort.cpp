#include "stdafx.h"
#include "selection_sort.h"
#include<iostream>

using namespace std;

void selection_sort(int ar[], int size)
{
	print_array(ar, size);
	int min_id;
	for (int i = 0; i < size - 1;i++)
	{
		min_id = i;
		for (int j = i + 1; j < size;j++)
		{
			if (ar[min_id] > ar[j])
				min_id = j;
		}
		if (min_id != i)
		{
			swap(&ar[min_id], &ar[i]);
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