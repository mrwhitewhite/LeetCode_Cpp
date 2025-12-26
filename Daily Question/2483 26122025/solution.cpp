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
    int bestClosingTime(string customers)
    {
        int current_min = 0;
        int res = -1;
        int open = 0;
        int close = 0;

        // init close, open
        for (char c : customers)
        {
            if (c == 'Y')
            {
                close++;
                current_min++;
            }
        }

        for (int start_close = 0; start_close < customers.size(); start_close++)
        {
            if (customers[start_close] == 'Y')
                close--;
            else
                open++;

            if (close + open < current_min)
            {
                res = start_close;
                current_min = close + open;
            }
        }

        return res + 1;
    }
};