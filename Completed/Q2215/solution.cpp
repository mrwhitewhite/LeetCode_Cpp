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
        int hash1[2001] = {0}, hash2[2001] = {0}; // hash from 0-2000 index (2001 element)
        vector<vector<int>> out = {{}, {}};

        // hashing
        for (int ele1 : nums1)
        {
            if (ele1 >= 0)
                hash1[ele1] = 1;
            else
                hash1[-ele1 + 1000] = 1;
        }
        for (int ele2 : nums2)
        {
            if (ele2 >= 0)
                hash2[ele2] = 1;
            else
                hash2[-ele2 + 1000] = 1;
        }

        // searching hashmap
        for (int ele1 : nums1)
        {
            if (ele1 >= 0)
            {
                if (hash2[ele1] == 0)
                {
                    hash2[ele1]++;
                    out[0].push_back(ele1);
                }
            }
            else
            {
                if (hash2[-ele1 + 1000] == 0)
                {
                    hash2[-ele1 + 1000]++;
                    out[0].push_back(ele1);
                }
            }
        }
        for (int ele2 : nums2)
        {
            if (ele2 >= 0)
            {
                if (hash1[ele2] == 0)
                {
                    hash1[ele2]++;
                    out[1].push_back(ele2);
                }
            }
            else
            {
                if (hash1[-ele2 + 1000] == 0)
                {
                    hash1[-ele2 + 1000]++;
                    out[1].push_back(ele2);
                }
            }
        }
        return out;
    }
};