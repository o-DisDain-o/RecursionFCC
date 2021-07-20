#include <bits/stdc++.h>
using namespace std;

int recursiveSummation(int inputNum)
{
    if (inputNum <= 1)
        return inputNum;

    return inputNum + recursiveSummation(inputNum - 1);
}
int main()
{
    int num = 10;

    int ans = recursiveSummation(num);
    cout << "Recursive Summation of " << num << " is " << ans;
}