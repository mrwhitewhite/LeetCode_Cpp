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
        int n = grid.size();
        int out = 0;
        map<vector<int>, int> hash1;
        map<vector<int>, int> hash2;

        for (vector<int> row : grid)
            hash1[row]++;

        for (int col_i = 0; col_i < n; col_i++)
        {
            vector<int> tmp;
            for (vector<int> row : grid)
            {
                tmp.push_back(row[col_i]);
            }
            hash2[tmp]++;
            tmp.clear();
        }

        for (const auto &[key, value] : hash1)
        {
            if (value == 0 or hash2[key] == 0)
                continue;
            out += hash2[key] * value;
        }

        // cout << "Hash  1:" << endl;
        // print_map_vector_int_int(hash1);

        // cout << "Hash  1:" << endl;
        // print_map_vector_int_int(hash2);

        return out;
    }
};