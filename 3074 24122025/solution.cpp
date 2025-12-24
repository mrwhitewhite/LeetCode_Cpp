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
    int minimumBoxes(vector<int> &apple, vector<int> &capacity)
    {
        int sum = accumulate(apple.begin(), apple.end(), 0);
        sort(capacity.rbegin(), capacity.rend());

        for (int i = 0; i < capacity.size(); i++)
        {
            sum -= capacity[i];
            if (sum <= 0)
                return i + 1;
        }

        return 0;
    }
};