#include <bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>> maze, vector<string> &ans, int srcx, int srcy, int desx, int desy, string output, vector<vector<int>> visited)
{
    if (srcx == desx && srcy == desy)
    {
        ans.push_back(output);
        return;
    }
    // up
    visited[srcx][srcy] = 1;
    if (srcx - 1 >= 0 && maze[srcx - 1][srcy] == 1 && visited[srcx - 1][srcy] == 0)
    {
        output.push_back('U');
        // visited[srcx - 1][srcy] = 1;
        solve(maze, ans, srcx - 1, srcy, desx, desy, output, visited);
        // visited[srcx - 1][srcy] = 0;
        output.pop_back();
    }
    // down
    if (srcx + 1 <= desx && maze[srcx + 1][srcy] == 1 && visited[srcx + 1][srcy] == 0)
    {
        output.push_back('D');
        // visited[srcx + 1][srcy] = 1;
        solve(maze, ans, srcx + 1, srcy, desx, desy, output, visited);
        // visited[srcx + 1][srcy] = 0;
        output.pop_back();
    }
    // right
    if (srcy + 1 <= desy && maze[srcx][srcy + 1] == 1 && visited[srcx][srcy + 1] == 0)
    {
        output.push_back('R');
        // visited[srcx][srcy + 1] = 1;
        solve(maze, ans, srcx, srcy + 1, desx, desy, output, visited);
        // visited[srcx][srcy + 1] = 0;
        output.pop_back();
    }

    // left
    if (srcy - 1 >= 0 && maze[srcx][srcy - 1] == 1 && visited[srcx][srcy - 1] == 0)
    {
        output.push_back('L');
        visited[srcx][srcy - 1] = 1;
        solve(maze, ans, srcx, srcy - 1, desx, desy, output, visited);
        // visited[srcx][srcy - 1] = 0;
        output.pop_back();
    }
    visited[srcx][srcy] = 0;
}

int main()
{
    vector<vector<int>> maze = {
        {1, 1, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}};

    vector<vector<int>> visited = {
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}};
    vector<string> ans;
    int srcx = 0;
    int srcy = 0;
    int desx = 3;
    int desy = 3;
    string output;
    solve(maze, ans, srcx, srcy, desx, desy, output, visited);

    cout << "{";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
        if (i != ans.size() - 1)
        {
            cout << " ";
        }
    }
    cout << "}" << endl;
}