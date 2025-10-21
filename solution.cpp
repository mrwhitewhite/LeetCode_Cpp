#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include "tools.cpp"
using namespace std;

// class here
class Solution
{
public:
    string removeStars(string s)
    {
        stack<char> arr;
        string out;

        for (char c : s)
        {
            if (c == '*')
            {
                arr.pop();
                continue;
            }

            arr.push(c);
        }

        while (!arr.empty())
        {
            out += arr.top();
            arr.pop();
        }
        reverse(out.begin(), out.end());
        return out;
    }
};