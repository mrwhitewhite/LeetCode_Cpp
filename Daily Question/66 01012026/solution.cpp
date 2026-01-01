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
    vector<int> plusOne(vector<int> &digits)
    {
        plusOneOn(digits, digits.size() - 1);
        return digits;
    }

    void plusOneOn(vector<int> &digits, int idx)
    {
        if (digits[idx] < 9)
        {
            digits[idx]++;
        }
        else // digits[idx] == 9
        {
            digits[idx] = 0;

            if (idx == 0)
                digits.insert(digits.begin(), 1);
            else
                plusOneOn(digits, --idx);
        }

        return;
    }
};