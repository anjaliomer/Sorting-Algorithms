#include "stdafx.h"
#include "quick_sort.h"
#include<iostream>

using namespace std;

void quick_sort(int ar[], int first, int last)
{
	if (first < last)
	{
		int pivot = partition(ar, first, last);
		quick_sort(ar, pivot + 1, last);
		quick_sort(ar, first, pivot - 1);
	}
}

int partition(int ar[], int first, int last)
{
	int pivot = ar[last];
	int i = first-1;
	for (int j = first; j < last; j++)
	{
		if (ar[j] <= pivot)
		{ 
			i++;
			swap(&ar[i], &ar[j]);
		}	
	}
	swap(&ar[i + 1], &ar[last]);
	return (i + 1);
}

void swap(int *a, int*b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

void print_array(int ar[], int size)
{
	for (int i = 0; i < size; i++)
		cout << ar[i] << " ";
	cout << endl;
}


