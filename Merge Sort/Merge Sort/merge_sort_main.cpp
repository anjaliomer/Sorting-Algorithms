#include"stdafx.h"
#include"merge_sort.h"
#include<iostream>

using namespace std;

int main()
{
	int ar[] = { 3,2,5,4,9,7,1,6,8 };
	int size = sizeof(ar) / sizeof(ar[0]);
	cout << "\nMerge sort\n";
	print_array(ar, size);
	merge_sort(ar, size);
	print_array(ar, size);
	return 0;
}

