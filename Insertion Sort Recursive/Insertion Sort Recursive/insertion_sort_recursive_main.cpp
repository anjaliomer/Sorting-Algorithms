#include"stdafx.h"
#include"insertion_sort_recursive.h"
#include<iostream>

using namespace std;

int main()
{
	int ar[] = { 1,5,2,49,10,8,7 };
	int size = sizeof(ar) / sizeof(ar[0]);
	cout << "\nInsertion Sort\n";
	print_array(ar, size);
	insertion_sort(ar, size);
	print_array(ar, size);
	return 0;
}