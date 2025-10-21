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
        deque<char> arr;
        string out;

        for (char c : s)
        {
            if (c == '*')
            {
                arr.pop_back();
                continue;
            }

            arr.push_back(c);
        }

        for (char c : arr)
            out += c;
        return out;
    }
};