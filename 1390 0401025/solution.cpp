#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cmath>
#include "tools.cpp"
using namespace std;

class Solution
{
public:
    int sumFourDivisors(vector<int> &nums)
    {
        int res = 0;
        int div_count;
        int div;

        for (int num : nums)
        {
            if (num <= 5)
                continue;

            div_count = 0;
            div = 0;
            for (int i = 2; i <= floor(sqrt(num)); i++)
            {
                if (num % i == 0)
                {
                    div_count++;
                    div = i;
                }
            }

            if (div_count == 1)
            {
                if (num / div != div)
                    res += 1 + num + div + num / div;
            }
        }

        return res;
    }
};