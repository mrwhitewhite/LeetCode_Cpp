#include <iostream>
#include <vector>
#include "tools.cpp"
using namespace std;

// class here
class Solution {
public:
    int maxArea(vector<int> &height)
    {
        int n = height.size();
        int max_area = -1;
        int right = n - 1;
        int left = 0;
        int hleft;
        int hright;
        int area;

        while (right > left)
        {
            hleft = height[left];
            hright = height[right];
            area = calc_area(hleft, hright, left, right);
            max_area = max(max_area, area);

            // determine add which side
            if (hleft >= hright)
            {
                right--;
            }
            else
            {
                left++;
            }
        }

        return max_area;
    }

    int calc_area(int h1, int h2, int i1, int i2)
    {
        return min(h1, h2) * (i2 - i1);
    }
};