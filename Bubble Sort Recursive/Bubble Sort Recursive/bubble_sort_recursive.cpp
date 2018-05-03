#include "stdafx.h"
#include "bubble_sort_recursive.h"
#include<iostream>

using namespace std;

void bubble_sort(int ar[], int size)
{
	if (size == 1)
		return;

	for (int i = 0; i < size - 1; i++)
	{
		ar[i] > ar[i + 1];
		swap(&ar[i], &ar[i + 1]);
	}

	bubble_sort(ar, size - 1);
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

