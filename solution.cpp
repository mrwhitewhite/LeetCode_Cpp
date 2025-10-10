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

        for (int i = 0; i < n; ++i)
        {
            for (int j = 1; j < n; ++j)
            {
                // skip iteration
                if (i == j)
                    continue;

                for (int k = 2; k < n; ++k)
                {
                    // cout << nums.at(i) << " " << nums.at(j) << " " << nums.at(k) << endl;
                    // cout << i << " " << j << " " << k << endl;

                    // skip iteration
                    if (j == k)
                        continue;
                    if(nums.at(i) > nums.at(j))
                        continue;

                    if (i < j and j < k)
                    {
                        // verify number
                        if (nums.at(i) < nums.at(j) and nums.at(j) < nums.at(k))
                        {
                            return true;
                        }
                    }
                }
            }
        }

        return false;
    }
};