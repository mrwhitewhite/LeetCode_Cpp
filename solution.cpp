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
        string out;

        for (char c : s)
        {
            if (c == '*')
            {
                out.pop_back();
                continue;
            }

            out.push_back(c);
        }

        return out;
    }
};