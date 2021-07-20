#include <bits/stdc++.h>
using namespace std;

long fib(long num)
{
    if (num <= 1)
        return num;
    return fib(num - 1) + fib(num - 2);
}
int main()
{
    long n = 10;

    long ans = fib(n);

    cout << n << "th fibonacii number is " << ans;
}