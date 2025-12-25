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
        sort(happiness.rbegin(), happiness.rend());

        for (int i = 0; i < k; i++)
            res += happiness[i] - i < 0 ? 0 : happiness[i] - i;

        return res;
    }
};