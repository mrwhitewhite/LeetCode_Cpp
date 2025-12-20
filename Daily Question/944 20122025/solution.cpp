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

        for (int row = 0; row < strs[0].size(); row++)
        {
            for (int col = 1; col < strs.size(); col++)
            {
                if (strs[col - 1][row] > strs[col][row])
                {
                    res++;
                    break;
                }
            }
        }

        return res;
    }
};