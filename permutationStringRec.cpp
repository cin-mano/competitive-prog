#include <bits/stdc++.h>
using namespace std;

void permutation(string str, int index, vector<string> &ans)
{
    if (index >= str.size())
    {
        ans.push_back(str);
        return;
    }

    for (int i = index; i < str.size(); i++)
    {
        swap(str[index], str[i]);
        permutation(str, index + 1, ans);

        // backtrack
        swap(str[index], str[i]);
    }
}

int main()
{
    string str = "abc";
    vector<string> ans;
    permutation(str, 0, ans);

    cout << "{";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << ",";
    }
    cout << "}" << endl;
}