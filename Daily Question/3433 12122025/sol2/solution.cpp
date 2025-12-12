#include <iostream>
#include <vector>
#include <algorithm>
#include "tools.cpp"
using namespace std;

// class here
class Solution
{
public:
    vector<int> countMentions(int numberOfUsers, vector<vector<string>> &events)
    {
        vector<int> out(numberOfUsers, 0);

        return out;
    }

    vector<int> ExtractStringId(const string &input)
    {
        vector<int> out;
        string now = "";
        for (char c : input + ' ')
        {
            if (c == 'i' || c == 'd')
                continue;
            else if (c == ' ')
            {
                out.push_back(stoi(now));
                now = "";
                continue;
            }
            now += c;
        }
        return out;
    }
};