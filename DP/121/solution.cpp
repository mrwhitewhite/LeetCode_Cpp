#include <iostream>
#include <vector>
#include <algorithm>
#include "tools.cpp"
using namespace std;

// class here
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int min_p = prices[0];
        int out = 0;

        for (int i = 1; i < prices.size(); i++)
        {
            out = max(prices[i] - min_p, out);
            min_p = min(min_p, prices[i]);
        }

        return out;
    }
};