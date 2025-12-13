#include <iostream>
#include <vector>
#include "tools.cpp"
using namespace std;

// class here
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        const int n = height.size();
        int max_area = 0;
        int right = n - 1;
        int left = 0;
        int area;

        while (right > left)
        {
            area = min(height[left], height[right]) * (right - left);
            max_area = max(max_area, area);

            // determine add which side
            if (height[left] >= height[right])
                right--;
            else
                left++;
        }

        return max_area;
    }
};