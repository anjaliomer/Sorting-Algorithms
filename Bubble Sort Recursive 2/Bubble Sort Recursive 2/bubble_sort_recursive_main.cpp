#include"stdafx.h"
#include"bubble_sort_recursive.h"
#include<iostream>

using namespace std;

int main()
{
	int ar[] = { 64, 25, 12, 22, 11 };
	int size = sizeof(ar) / sizeof(ar[0]);
	cout << "\nBubble Sort\n";
	print_array(ar, size);
	bubble_sort(ar, size, 0);
	print_array(ar, size);
	return 0;
}
