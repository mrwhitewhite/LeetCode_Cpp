#include <iostream>
#include <vector>
#include <algorithm>
#include "tools.cpp"
using namespace std;

class Solution
{
public:
    int minDeletionSize(vector<string> &strs)
    {
        int res = 0;

        for (int col = 0; col < strs[0].size(); col++)
        {
            vector<char> tmp = {};
            for (int row = 0; row < strs.size(); row++)
                tmp.push_back(strs[row][col]);

            if (!is_sorted(tmp.begin(), tmp.end()))
                res++;
        }

        return res;
    }
};