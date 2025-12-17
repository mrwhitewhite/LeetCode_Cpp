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
        int buy_state;
        int sell_state;
        int prev_buy;
        int prev_sell;
        const int n = prices.size();
        vector<vector<int>> dp;

        // init first
        buy_state = -prices[0];
        sell_state = 0;
        dp.push_back({buy_state, sell_state});

        for (int i = 1; i < n; i++)
        {
            prev_buy = dp[i - 1][0];
            prev_sell = dp[i - 1][1];

            buy_state = max(prev_buy, prev_sell - prices[i]);
            sell_state = max(prev_sell, prev_buy + prices[i]);
            dp.push_back({buy_state, sell_state});
        }

        return dp[dp.size() - 1][1];
    }
};