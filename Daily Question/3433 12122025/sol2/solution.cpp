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
        int ptr = 0;
        int i = 0;
        for (; i < input.size(); i++)
        {
            if (isdigit(input.at(i)))
            {
                ptr = i;
                for (; i < input.size(); i++)
                {
                    if (input.at(i) == ' ' || i == input.size() - 1)
                    {
                        out.push_back(stoi(input.substr(ptr, i - ptr + 1)));
                        break;
                    }
                }
            }
        }
        return out;
    }
};