#include <bits/stdc++.h>
using namespace std;

bool checkMat(vector<vector<char>> &grid)
{
    if (grid[0][0] == grid[0][1] && grid[0][1] == grid[1][0] && grid[1][0] == grid[1][1])
    {
        return true;
    }
    if (grid[0][1] == grid[0][2] && grid[0][2] == grid[1][1] && grid[1][1] == grid[1][2])
    {
        return true;
    }
    if (grid[1][0] == grid[1][1] && grid[1][1] == grid[2][0] && grid[2][0] == grid[2][1])
    {
        return true;
    }
    if (grid[1][1] == grid[1][2] && grid[1][1] == grid[2][1] && grid[2][1] == grid[2][2])
    {
        return true;
    }
    return false;
}

bool canMakeSquare(vector<vector<char>> &grid)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            bool check = checkMat(grid);
            if (check)
            {
                return true;
            }
            if (grid[i][j] == 'B')
            {
                grid[i][j] = 'W';
            }
            else
            {
                grid[i][j] = 'B';
            }
            check = checkMat(grid);
            if (check)
            {
                return true;
            }

            if (grid[i][j] == 'B')
            {
                grid[i][j] = 'W';
            }
            else
            {
                grid[i][j] = 'B';
            }
        }
    }
    return false;
}

int main()
{
    // [["B","W","B"],["B","W","W"],["B","W","B"]]
    vector<vector<char>> vect{
        {'B', 'W', 'B'},
        {'B', 'W', 'W'},
        {'B', 'W', 'B'}};

    cout << canMakeSquare(vect);

    return 0;
}