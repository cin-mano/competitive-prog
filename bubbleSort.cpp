#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int len = n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < len - 1; j++)
        {
            if (arr[j] < arr[j + 1]) // change < , > for asc and desc
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        len--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}