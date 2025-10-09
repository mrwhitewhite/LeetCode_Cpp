#include <vector>
#include <iostream>
using namespace std;

// class here
class Solution
{
public:
    bool increasingTriplet(vector<int> &nums)
    {
        int n = nums.size();
        int prev;
        int current;
        int next;
        for (int i = 1; i < n - 1; i++)
        {
            prev = nums.at(i - 1);
            current = nums.at(i);
            next = nums.at(i + 1);

            if (prev < current && current < next)
                return true;
        };

        return false;
    }
};