#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int start, int mid, int end)
{
    vector<int> temp;

    int i = start, j = mid + 1;

    while (i <= mid and j <= end)
    {
        if (arr[i] < arr[j])
            temp.push_back(arr[i++]);
        else if (arr[i] > arr[j])
            temp.push_back(arr[j++]);
        else
        {
            temp.push_back(arr[i++]);
            temp.push_back(arr[j++]);
        }
    }

    while (i != mid + 1)
        temp.push_back(arr[i++]);

    while (j != end + 1)
        temp.push_back(arr[j++]);

    int k = 0;
    for (i = start; i <= end; i++)
        arr[i] = temp[k++];
}

void mergeSort(vector<int> &arr, int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

int main()
{
    vector<int> arr{8, 7, 6, 5, 4, 4, 3, 2, 1};

    mergeSort(arr, 0, arr.size() - 1);

    cout << "Sorted array : ";
    for (int num : arr)
        cout << num << " ";

    return 0;
}