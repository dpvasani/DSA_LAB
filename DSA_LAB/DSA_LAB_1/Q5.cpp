// C++ program to find product of array elements.

#include <iostream>
using namespace std;

int product(int ar[], int n)
{
	int result = 1;
	for (int i = 0; i < n; i++)
		result = result * ar[i];
	return result;
}

int main()
{

	int ar[] = { 1, 2, 3, 4, 5 };
	int n = sizeof(ar) / sizeof(ar[0]);
	cout << product(ar, n);
	return 0;
}

