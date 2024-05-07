// concept is too good written in notebook

#include <bits/stdc++.h>
using namespace std;

void allSubsets(vector<int> arr, vector<int> output, int index, vector<vector<int>> &ans)
{
    if (index >= arr.size())
    {
        ans.push_back(output);
        return;
    }
    // excluding elements
    allSubsets(arr, output, index + 1, ans);
    // including elements
    output.push_back(arr[index]);
    allSubsets(arr, output, index + 1, ans);
}

int main()
{
    vector<int> arr = {1, 2, 3, 4};
    vector<vector<int>> ans;
    vector<int> output;

    allSubsets(arr, output, 0, ans);

    // print
    for (int i = 0; i < ans.size(); i++)
    {
        vector<int> subset = ans[i];
        cout << "{";
        for (int j = 0; j < subset.size(); j++)
        {
            cout << subset[j];
            if (j != subset.size() - 1)
            {
                cout << ",";
            }
        }
        cout << "}" << endl;
    }
}