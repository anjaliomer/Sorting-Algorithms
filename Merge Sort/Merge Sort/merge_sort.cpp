#include "stdafx.h"
#include "merge_sort.h"
#include<iostream>

using namespace std;

void merge_sort(int ar[], int first, int last)
{
	if (first < last)
	{
		int mid = first + (last - first) / 2;
		merge_sort(ar, first, mid);
		merge_sort(ar, mid + 1, last);
		merge(ar, first, last, mid);
	}
}

void merge(int ar[], int first, int last, int mid)
{
	int nl = mid - first + 1;
	int nr = last - mid;

	int * l = new int[nl];
	int * r = new int[nr];

	for (int i = 0; i < nl; i++)
	{
		l[i] = ar[first + i];
	}

	for (int j = 0; j < nr; j++)
	{
		r[j] = ar[mid + 1 + j];
	}

	int i = 0;
	int j = 0;
	int k = first;

	while (i < nl && j < nr)
	{
		if (l[i] <= r[j])
		{
			ar[k] = l[i];
			i++;
			k++;
		}
		else
		{
			ar[k] = r[j];
			j++;
			k++;
		}
	}

	while (i < nl)
	{
		ar[k] = l[i];
		i++;
		k++;
	}

	while (j < nr)
	{
		ar[k] = r[j];
		j++;
		k++;
	}




}

void print_array(int ar[], int size)
{
	for (int i = 0; i < size;i++)
	{
		cout << ar[i] << " ";
	}
	cout << "\n";

}