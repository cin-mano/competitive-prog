#include <bits/stdc++.h>
using namespace std;

void checkPalin(string str, int sidx, int eidx)
{
    if (str.length() == 1 || str.length() == 0)
    {
        cout << "Palindrome";
        return;
    }
    if (str[sidx] != str[eidx])
    {
        cout << "Not Palindrome";
        return;
    }
    checkPalin(str.substr(1, eidx - 1), 0, eidx - 2);
}

int main()
{
    string str = "1acaq1";
    int len = str.length();
    checkPalin(str, 0, len - 1);
}