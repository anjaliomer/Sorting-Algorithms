#include"stdafx.h"
#include"merge_sort.h"
#include<iostream>

using namespace std;

int main()
{
	int ar[] = { 64,25,12,22,11 };
	int size = sizeof(ar) / sizeof(ar[0]);
	cout << "\nMerge sort\n";
	print_array(ar, size);
	merge_sort(ar, size);
	print_array(ar, size);
	return 0;
}