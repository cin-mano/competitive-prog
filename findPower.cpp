#include <bits/stdc++.h>
using namespace std;

int findPow(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }

    return m * findPow(m, n - 1);
}

int main()
{
    int res = findPow(10, 4);
    cout << res << endl;
}