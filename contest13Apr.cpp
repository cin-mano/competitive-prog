#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int result = abs(str[1] - str[0]);
    for (int i = 1; i < str.length() - 1; i++)
    {
        result = result + abs(str[i + 1] - str[i]);
    }
    cout << result << endl;
}