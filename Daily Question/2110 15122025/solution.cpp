#include <iostream>
#include <vector>
#include "tools.cpp"
using namespace std;

// class here
class Solution
{
public:
    long long getDescentPeriods(vector<int> &p)
    {
        long long out = p.size();
        int prev = 0;

        for (int i = 1; i < p.size(); i++)
        {
            if (p[i - 1] - p[i] == 1)
            {
                prev++;
                out += prev;
            }
            else
            {
                prev = 0;
            }
        }

        return out;
    }
};