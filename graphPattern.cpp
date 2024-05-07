#include <bits/stdc++.h>
using namespace std;

int main()
{
    int col = 21;
    int f = 3, s = 2, t = 1;
    for (int i = 1; i <= 3; i++) // for row
    {
        for (int k = 1; k <= col; k++)
        {
            if (k == f && i == 1)
            {
                cout << "*";
                f += 4;
            }
            else if (k == s && i == 2)
            {
                cout << "*";
                s += 2;
            }
            else if (k == t && i == 3)
            {
                cout << "*";
                t += 4;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}