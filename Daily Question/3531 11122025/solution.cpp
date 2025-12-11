#include <iostream>
#include <vector>
#include <algorithm>
#include "tools.cpp"
using namespace std;

// class here
class Solution
{
public:
    int countCoveredBuildings(int max_coor, vector<vector<int>> &b)
    {
        int out = 0;
        const int n = b.size();
        vector<vector<int>> x_y_boundary(max_coor, vector<int>(2, -1)); // given x as idx, return boundary of y
        vector<vector<int>> y_x_boundary(max_coor, vector<int>(2, -1)); // given y as idx, return boundary of x

        // ensure all coor has range [0,max_coor-1] ; original is [1, max_coor]
        for (int i = 0; i < n; i++)
        {
            b[i][0]--;
            b[i][1]--;
        }

        // get boundary
        for (int i = 0; i < n; i++)
        {
            int x = b[i][0];
            int y = b[i][1];

            x_y_boundary[x][0] = x_y_boundary[x][0] == -1 ? y : min(x_y_boundary[x][0], y); // lower bound
            x_y_boundary[x][1] = x_y_boundary[x][1] == -1 ? y : max(x_y_boundary[x][1], y); // upper bound
            y_x_boundary[y][0] = y_x_boundary[y][0] == -1 ? x : min(y_x_boundary[y][0], x); // lower bound
            y_x_boundary[y][1] = y_x_boundary[y][1] == -1 ? x : max(y_x_boundary[y][1], x); // upper bound
        }

        // count coor inside boundary
        for (int i = 0; i < n; i++)
        {
            int x = b[i][0];
            int y = b[i][1];

            if (
                isExclusiveIn(x, y_x_boundary[y]) &&
                isExclusiveIn(y, x_y_boundary[x]))
            {
                out++;
            }
        }

        // ================ DEBUG =====================
        // print vector 2d
        // cout << "========== x_y ==========" << endl;
        // for (int i = 0; i < x_y_boundary.size(); i++)
        //     print_vector(x_y_boundary[i]);
        // cout << "========== y_x ==========" << endl;
        // for (int i = 0; i < x_y_boundary.size(); i++)
        //     print_vector(x_y_boundary[i]);
        // for (int i = 0; i < b.size(); i++)
        //     print_vector(b[i]);

        return out;
    }

    bool isExclusiveIn(int val, vector<int> bound)
    {
        return val > bound[0] && val < bound[1];
    }
};