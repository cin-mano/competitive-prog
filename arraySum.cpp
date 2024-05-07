#include <bits/stdc++.h>
using namespace std;

void arraySum(int arr[], int len, int idx)
{
    if (idx == len - 1)
    {
        cout << arr[idx - 1] + arr[idx];
        return;
    }
    if (idx)
    {
        arr[idx] = arr[idx] + arr[idx - 1];
    }
    arraySum(arr, len, ++idx);
}

int main()
{
    int arr[5] = {1, 2, 4, 6, 9};
    arraySum(arr, 5, 0);
}