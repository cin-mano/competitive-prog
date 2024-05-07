#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    vector<int> vec;
    while (cin >> x) // not working here for enter press, asking for more input
    {
        cout << "here";
        vec.push_back(x);
    }
    int vecLen = vec.size();

    for (int i = 0; i < vecLen; i++)
    {
        int max = INT_MIN;
        int index;
        for (int j = i; j < vecLen; j++)
        {
            if (vec[j] > max)
            {
                max = vec[j];
                index = j;
            }
        }
        int temp = vec[i];
        vec[i] = max;
        vec[index] = temp;
    }
    for (int i = 0; i < vecLen; i++)
    {
        cout << vec[i];
    }
}