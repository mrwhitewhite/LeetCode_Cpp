#include <iostream>
#include <vector>
#include <deque>
#include "tools.cpp"
using namespace std;

// class here
class Solution
{
public:
    string removeStars(string s)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '*')
            {
                s.erase(s.begin() + --i);
                s.erase(s.begin() + i--);
            }
        }
        return s;
    }
};