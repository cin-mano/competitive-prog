#include <bits/stdc++.h>
using namespace std;

void printDecNumber(int n)
{
    if (n == 0)
    {
        return;
    }

    cout << n << endl;
    printDecNumber(n - 1);
    // return n - 1;
}

void printIncNumber(int n)
{
    // static int num = 1;
    if (n == 0)
    {
        return;
    }

    printIncNumber(n - 1);
    cout << n << endl;
    // return n - 1;
}

int main()
{
    // printDecNumber(5);
    printIncNumber(5);
}