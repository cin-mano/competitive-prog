#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n, vector<int> mem)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    if (mem[n] != -1)
    {
        return mem[n];
    }

    int ans = fibonacci(n - 1, mem) + fibonacci(n - 2, mem);
    if (mem[n] == -1)
    {
        mem[n] = ans;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> mem;
    for (int i = 0; i <= n; i++)
    {
        mem.push_back(-1);
    }
    int ans = fibonacci(n, mem);
    cout << ans << endl;
}