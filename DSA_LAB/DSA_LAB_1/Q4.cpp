#include <stdio.h>
 
// Function to find the nth Fibonacci number
int fib(int n)
{
    if (n <= 1) {
        return n;
    }
 
    return fib(n - 1) + fib(n - 2);
}
 
int main()
{
    int n = 8;
 
    printf("F(n) = %d", fib(n));
 
    return 0;
}
