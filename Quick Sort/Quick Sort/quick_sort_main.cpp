#include"stdafx.h"
#include "quick_sort.h"
#include<iostream>

using namespace std;

int main()
{
	int ar[] = { 64,25,12,22,11 };
	int size = sizeof(ar) / sizeof(ar[0]);
	print_array(ar, size);
	cout << "\nQuick Sort\n"<<endl;
	quick_sort(ar, 0, size-1);
	print_array(ar, size);
	return 0;
}