#include <iostream>
#include <vector>
#include <algorithm>
#include "tools.cpp"
using namespace std;

// class here
class Solution
{
public:
    string removeStars(string s)
    {
        int rep = 0;

        for (int scan = 1; scan < s.size(); scan++)
        {
            if (s[scan] == '*')
            {
                s[rep--] = s[scan + 1];
                continue;
            }
            s[++rep] = s[scan];
        }
        return s.substr(0, rep + 1);
    }
};