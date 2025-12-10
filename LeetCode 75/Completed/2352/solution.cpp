#include <iostream>
#include <vector>
#include <map>
#include "tools.cpp"
using namespace std;

// class here
class Solution
{
public:
    int equalPairs(vector<vector<int>> &grid)
    {
        const int n = grid.size();
        int out = 0;
        map<vector<int>, int> hash1;
        for (vector<int> row : grid)
            hash1[row]++;

        for (int col_i = 0; col_i < n; col_i++)
            out += hash1[get_col(grid, col_i)];

        return out;
    }

    inline vector<int> get_col(const vector<vector<int>> &vec, const int &col)
    {
        vector<int> out;
        for (int i = 0; i < vec.size(); i++)
            out.push_back(vec[i][col]);
        return out;
    }
};