#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include "tools.cpp"
using namespace std;

// class here
class Solution
{
public:
    long long maximumHappinessSum(vector<int> &happiness, int k)
    {
        long long res = 0;
        const int n = happiness.size();
        sort(happiness.begin(), happiness.end());

        for (int i = 0; i < k; i++)
            res += max(happiness[n - 1 - i] - i, 0);

        return res;
    }
};