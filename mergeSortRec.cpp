#include <bits/stdc++.h>
using namespace std;

void combineMerge(int *arr, int s, int e)
{
    int mid = (s + e) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copying
    int k = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[k++];
    }

    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[k++];
    }

    // merge
    int ind1 = 0;
    int ind2 = 0;
    int mainInd = s;

    // this will combine array up to same length
    while (ind1 < len1 && ind2 < len2)
    {
        if (first[ind1] < second[ind2])
        {
            arr[mainInd++] = first[ind1];
            ind1++;
        }
        else
        {
            arr[mainInd++] = second[ind2];
            ind2++;
        }
    }
    // if len1 > len2
    while (ind1 < len1)
    {
        arr[mainInd++] = first[ind1++];
    }
    while (ind2 < len2)
    {
        arr[mainInd++] = second[ind2++];
    }
}

void mergeSort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }

    // left
    int mid = (s + e) / 2;
    // left
    mergeSort(arr, s, mid);
    // right
    mergeSort(arr, mid + 1, e);

    // combine
    combineMerge(arr, s, e);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}