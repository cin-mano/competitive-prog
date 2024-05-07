#include <bits/stdc++.h>
using namespace std;

int findPos(int arr[], int s, int e)
{
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= arr[s])
        {
            count++;
        }
    }
    int pos = s + count;
    swap(arr[pos], arr[s]);

    int i = s, j = e;

    while (i < pos && j > pos)
    {
        while (arr[i] < pos)
        {
            i++;
        }
        while (arr[j] > pos)
        {
            j--;
        }
        if (i < pos && j > pos)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pos;
}

void quickSort(int arr[], int s, int e)
{
    if (s > e)
    {
        return;
    }

    int pos = findPos(arr, s, e);

    quickSort(arr, s, pos - 1);
    quickSort(arr, pos + 1, e);
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

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}