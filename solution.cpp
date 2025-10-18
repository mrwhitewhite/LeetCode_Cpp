#include <iostream>
#include <vector>
#include "tools.cpp"
using namespace std;

// class here
class Solution
{
public:
    int maxOperations(vector<int> &nums, int k)
    {
        int count = 0;
        int i = 0;
        int j = 1;

        print_vector(nums);

        while (i < nums.size())
        {
            int current_i = nums[i];

            if(current_i >= k){
                i++;
                j=i+1;
                continue;
            }

            while (j < nums.size())
            {
                // cout << i << ": " << nums[i] << ", " << j << ": " << nums[j] << endl;
                if (current_i + nums[j] == k)
                {
                    // cout << i << ": " << nums[i] << ", " << j << ": " << nums[j] << endl;
                    nums[i] = k;
                    nums[j] = k;
                    print_vector(nums);
                    count++;
                    j = i;
                    i--;
                    break;
                }
                else
                {
                    j++;
                }
            }
            i++;
            j = i+1;
        }

        return count;
    }
};