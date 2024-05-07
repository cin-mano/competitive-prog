#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> denom, int amount, int count, int &minCount, unordered_map<int, int> dp)
{
    if (amount == 0)
    {
        if (count < minCount)
        {
            minCount = count;
        }
        return;
    }
    if (amount < 0)
    {
        count = INT_MAX;
        return;
    }
    if (dp[amount])
    {
        cout << "here";
        minCount = dp[amount];
        return;
    }
    for (int i = 0; i < denom.size(); i++)
    {
        solve(denom, amount - denom[i], count + 1, minCount, dp);
    }
    cout << amount << "->" << minCount << endl;
    dp[amount] = minCount;
}

int main()
{
    vector<int> denom = {1, 2, 5};
    int amount = 100;
    int count = 0;
    int minCount = INT_MAX;
    unordered_map<int, int> dp;
    solve(denom, amount, count, minCount, dp);
    cout << minCount << endl;
}