#include"stdafx.h"
#include"insertion_sort.h"
#include<iostream>

using namespace std;

int main()
{
	int ar[] = { 64, 25, 12, 22, 11 };
	int size = sizeof(ar) / sizeof(ar[0]);
	cout << "\nInsertion Sort\n";
	insertion_sort(ar, size);
	return 0;
}