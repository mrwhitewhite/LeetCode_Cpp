#include <iostream>
#include <vector>
#include <algorithm>
#include "tools.cpp"
using namespace std;

class Solution
{
public:
    vector<pair<int, int>> dp;
    int maxProfit(vector<int> &prices)
    {
        vector<pair<int, int>> dp;

        // init first
        dp.push_back(make_pair(-prices[0], 0));

        for (int i = 1; i < prices.size(); i++)
            dp.push_back(make_pair(
                max(dp[i - 1].first, dp[i - 1].second - prices[i]),
                max(dp[i - 1].second, dp[i - 1].first + prices[i])));

        return dp[dp.size() - 1].second;
    }
};