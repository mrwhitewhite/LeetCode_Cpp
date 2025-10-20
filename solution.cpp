#include <iostream>
#include <vector>
#include <unordered_set>
#include "tools.cpp"
using namespace std;

// class here
class Solution
{
public:
    vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_set<int> set1, set2;
        vector<vector<int>> out = {{}, {}};

        // vector to set
        for (int i = 0; i < nums1.size(); i++)
            set1.insert(nums1[i]);
        for (int i = 0; i < nums2.size(); i++)
            set2.insert(nums2[i]);

        // test existance
        for (int ele : set1)
        {
            if (set2.count(ele) == 0) // distinct element found
                out[0].push_back(ele);
        }
        for (int ele : set2)
        {
            if (set1.count(ele) == 0) // distinct element found
                out[1].push_back(ele);
        }

        return out;
    }
};