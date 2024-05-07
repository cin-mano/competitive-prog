#include <bits/stdc++.h>
#include <vector>

using namespace std;

void checkMurdered(vector<int> vec, int talwarIndex, int size)
{
    if (size == 1)
    {
        cout << endl
             << "\nfinal---->>>>>>." << vec[0] << endl;
        return;
    }

    if (talwarIndex == size - 1)
    {
        vec.erase(vec.begin());
        size--;
        talwarIndex = 0;
        cout << vec[talwarIndex] << "->";
        checkMurdered(vec, talwarIndex, size);
    }
    else if (talwarIndex == size - 2)
    {
        vec.erase(vec.begin() + talwarIndex + 1);
        size--;
        talwarIndex = 0;
        cout << vec[talwarIndex] << "->";
        checkMurdered(vec, talwarIndex, size);
    }

    else
    {
        vec.erase(vec.begin() + talwarIndex + 1);
        size--;
        talwarIndex++;
        cout << vec[talwarIndex] << "->";
        checkMurdered(vec, talwarIndex, size);
    }
}

int main()
{
    int size = 100;
    int talwarIndex = 0;
    vector<int> vec(size);
    for (int i = 0; i < 100; i++)
    {
        vec[i] = i + 1;
    }
    cout << vec[talwarIndex] << "->";
    checkMurdered(vec, 0, 100);
}

// 1 3 5 ->5
// 1 3 4 5 ->3
// 1 2 3 4 5 ->4