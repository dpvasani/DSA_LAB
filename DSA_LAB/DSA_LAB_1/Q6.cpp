// C++ program to find HCF of two numbers
#include <iostream>
using namespace std;
// Recursive function to return HCF of a and b in single line
int HCF(int a, int b)
{
	return b == 0 ? a : HCF(b, a % b);
}

// Driver program to test above function
int main()
{
	int a = 4, b = 16;
	cout<<"HCF of "<<a<<" and "<<b<<" is "<<HCF(a, b);
	return 0;
}
