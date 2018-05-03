#include"stdafx.h"
#include"insertion_sort_recursive.h"
#include<iostream>

using namespace std;

void insertion_sort(int ar[], int size, int key_index)
{
	if (key_index < size)
	{
		int key = ar[key_index];
		int j = key_index - 1;
		while (j >= 0 && ar[j] > key)
		{
			ar[j + 1] = ar[j];
			j = j - 1;
		}
		ar[j + 1] = key;
		insertion_sort(ar, size, key_index + 1);
	}
}

void print_array(int ar[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << ar[i] << " ";
	}
	cout << "\n";
}

