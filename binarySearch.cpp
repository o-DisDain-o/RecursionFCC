#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int left, int right, int &x)
{
    if (left > right)
        return -1;

    int mid = (left + right) / 2;

    if (arr[mid] == x)
        return mid;
    else if (arr[mid] < x)
        left = mid + 1;
    else
        right = mid - 1;

    return binarySearch(arr, left, right, x);
}
int main()
{
    vector<int> arr{-1, 0, 1, 2, 3, 4, 7, 9, 10, 20};
    int x = 10;
    int ans = binarySearch(arr, 0, arr.size() - 1, x);

    if (ans == -1)
        cout << x << " was not found in the given array.";
    else
        cout << x << " was found int array at index = " << ans;
}