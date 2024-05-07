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

    int max = 2;
    int curr = -1;
    int count = 2;

    for (int i = 0; i < n - 1; i++)
    {
        int diff = abs(arr[i] - arr[i + 1]);
        if (diff == curr)
        {
            count++;
            if (max < count)
                max = count;
        }
        else
        {
            count = 2;
            curr = diff;
        }
    }

    cout << max;
}