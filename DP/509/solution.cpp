#include <iostream>
#include <vector>
#include "tools.cpp"
using namespace std;

// class here
class Solution
{
public:
    int dp[31]{};

    int fib(int n)
    {
        if (n == 0)
            return 0;
        else if (n == 1)
            return 1;
        else if (dp[n] > 0)
            return dp[n];
        else
        {
            dp[n - 1] = fib(n - 1);
            dp[n - 2] = fib(n - 2);
            return dp[n - 1] + dp[n - 2];
        }
    }
};