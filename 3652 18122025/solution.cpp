#include <iostream>
#include <vector>
#include "tools.cpp"
using namespace std;

// class here
class Solution
{
public:
    long long maxProfit(vector<int> &prices, vector<int> &strategy, int k)
    {
        long long default_profit = 0;
        long long delta = 0;
        vector<int> new_strat(k, 1);

        // set new strat vector
        for (int i = 0; i < k / 2; i++)
            new_strat[i] = 0;

        // default profit
        for (int i = 0; i < prices.size(); i++)
            default_profit += prices[i] * strategy[i];

        // cout << "default_profit: " << default_profit << endl;

        // first window
        long long delta_original = 0;
        long long delta_new = 0;
        for (int i = 0; i < k; i++)
        {
            delta_original += prices[i] * strategy[i];
            delta_new += prices[i] * new_strat[i];
        }
        delta = max(delta, delta_new - delta_original);

        // sliding window
        for (int left = 1; left < prices.size() - k + 1; left++)
        {
            // original
            delta_original += prices[left - 1] * strategy[left - 1] * -1;
            delta_original += prices[left + k - 1] * strategy[left + k - 1];

            // new
            delta_new += prices[left - 1 + k / 2] * -1;
            delta_new += prices[left + k - 1] * 1;

            delta = max(delta, delta_new - delta_original);

            // cout << "delta_original: " << delta_original << endl;
            // cout << "delta_new: " << delta_new << endl;
            // cout << "delta_new - delta_original: " << delta_new - delta_original << endl;
            // cout << "------------------------------------" << endl;
        }
        // print_vector(new_strat);
        // cout << "delta_original: " << delta_original << endl;
        // cout << "Delta_new: " << delta_new << endl;

        return default_profit + delta;
    }
};