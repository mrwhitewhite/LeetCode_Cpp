#include <iostream>
#include <vector>
#include "tools.cpp"
using namespace std;

// class here
class Solution
{
public:
    const int mod = 1e9 + 7;

    int countPermutations(const vector<int> &complexity)
    {
        for (int i = 1; i < size(complexity); i++)
            if (complexity[i] <= complexity[0])
                return 0;

        return n_perm(size(complexity) - 1);
    }

    int n_perm(const int &n)
    {
        if (n == 0)
            return 1;

        long long ans = 1;
        for (int i = 2; i <= n; i++)
            ans = (ans * i) % mod;
        return ans;
    }
};