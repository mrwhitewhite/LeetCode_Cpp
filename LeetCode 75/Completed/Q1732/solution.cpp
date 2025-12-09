#include <iostream>
#include <vector>
#include "tools.cpp"
using namespace std;

// class here
class Solution
{
public:
    int largestAltitude(vector<int> &gain)
    {
        int max_alt = 0;
        int prev_alt = 0;
        for (int i = 0; i < gain.size(); i++)
        {
            prev_alt += gain[i] ;
            max_alt = max(max_alt, prev_alt);
        }

        return max_alt;
    }
};