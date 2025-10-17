#include <iostream>
using namespace std;

// class here
class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        int i = 0;
        char current = s[i];
        for (char _c : t)
        {
            if (_c == current)
            {
                if (++i >= s.size())
                {
                    return true;
                }
                else
                    current = s[i];
            }
            else
            {
                continue;
            }
        }

        if (i >= s.size())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};