#include <iostream>
#include <vector>
#include "tools.cpp"
using namespace std;

// class here
class Solution
{
public:
    int equalPairs(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int out = 0;

        for (int row = 0; row < n; row++)
        {
            for (int col = 0; col < n; col++)
            {
                for (int col_specific_element = 0; col_specific_element < n; col_specific_element++)
                {
                    // break if mismatch
                    if (grid[row][col_specific_element] != grid[col_specific_element][col])
                        break;
                    else if (col_specific_element == n - 1)
                        out++;
                }
            }
        }

        return out;
    }
};