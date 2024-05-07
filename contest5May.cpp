#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isValid(string word)
    {
        if (word.length() < 3)
        {
            return false;
        }
        int vCount = 0, cCount = 0;
        for (int i = 0; i < word.length(); i++)
        {
            if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U')
            {
                vCount++;
            }
            else if ((int(word[i]) >= 65 && int(word[i]) <= 90) || (int(word[i]) >= 97 && int(word[i]) <= 122))
            {
                cCount++;
            }
            else if (int(word[i]) >= 48 && int(word[i] <= 57))
            {
                continue;
            }
            else
            {
                return false;
            }
        }
        if (vCount && cCount)
        {
            return true;
        }
        return false;
    }
};