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
        long long out = 1;
        for (int i = 1; i < size(complexity); i++)
        {
            if (complexity[i] <= complexity[0])
                return 0;
            out = (out * i) % mod;
        }

        return out;
    }
};