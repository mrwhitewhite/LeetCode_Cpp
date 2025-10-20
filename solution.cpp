#include <iostream>
#include <vector>
#include "tools.cpp"
using namespace std;

// class here
class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        int hashmap[2001] = {0};
        int hashmap_freq[1001] = {0};

        // hash map
        for (int ele : arr)
        {
            hashmap[to_hashValue(ele)]++;
        }
        for (int ele : hashmap)
        {
            if (ele == 0)
                continue;
            hashmap_freq[ele]++;
        }
        for (int ele : hashmap_freq)
        {
            if (ele > 1)
                return false;
        }

        return true;
    }

    inline int to_hashValue(int value)
    {
        if (value >= 0)
            return value;
        else
            return -value + 1000;
    }
};