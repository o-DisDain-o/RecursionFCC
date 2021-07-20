#include <bits/stdc++.h>
using namespace std;

long fib(long num, unordered_map<int, int> &mp)
{
    if (mp.find(num) != mp.end())
        return mp[num];

    mp[num] = fib(num - 1, mp) + fib(num - 2, mp);
    return mp[num];
}
int main()
{
    long n = 10;
    unordered_map<int, int> mp;
    mp.insert({0, 0});
    mp.insert({1, 1});
    long ans = fib(n, mp);

    cout << n << "th fibonacii number is " << ans;
}