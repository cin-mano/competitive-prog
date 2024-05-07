#include <bits/stdc++.h>
using namespace std;

void reverseString(string str)
{
    if (str.length() == 1)
    {
        cout << str[0];
        return;
    }
    reverseString(str.substr(1));
    cout << str[0];
}

int main()
{
    string str = "abcd";
    reverseString(str);
}