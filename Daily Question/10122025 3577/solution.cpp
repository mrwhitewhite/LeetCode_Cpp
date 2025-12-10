#include <iostream>
#include <vector>
#include "tools.cpp"
using namespace std;

// class here
class Solution
{
public:
    const int mod = 1e9 + 7;

    int countPermutations(vector<int> &complexity)
    {
        const int n_complexity = size(complexity);
        const int complexity_decrypted = complexity[0];
        int out = 0;

        // return 0 if exist complexity < complexity_decrypted
        for (int i = 1; i < n_complexity; i++)
        {
            if (complexity[i] <= complexity_decrypted)
                return 0;
        }

        return n_perm(n_complexity - 1);
    }

    long long n_perm(int n)
    {
        if (n == 0)
            return 1;

        long long ans = 1;
        for (int i = 2; i <= n; i++)
            ans = (ans * i) % mod;
        return ans;
    }
};