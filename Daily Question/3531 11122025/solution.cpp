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
        vector<vector<int>> x_y_boundary(max_coor + 1, vector<int>(2, -1));
        vector<vector<int>> y_x_boundary(max_coor + 1, vector<int>(2, -1));

        // get boundary
        for (vector<int> &V : b)
        {
            x_y_boundary[V[0]][0] = x_y_boundary[V[0]][0] == -1 ? V[1] : min(x_y_boundary[V[0]][0], V[1]);
            x_y_boundary[V[0]][1] = x_y_boundary[V[0]][1] == -1 ? V[1] : max(x_y_boundary[V[0]][1], V[1]);
            y_x_boundary[V[1]][0] = y_x_boundary[V[1]][0] == -1 ? V[0] : min(y_x_boundary[V[1]][0], V[0]);
            y_x_boundary[V[1]][1] = y_x_boundary[V[1]][1] == -1 ? V[0] : max(y_x_boundary[V[1]][1], V[0]);
        }

        // count coor inside boundary
        for (vector<int> &V : b)
        {
            if (
                V[0] > y_x_boundary[V[1]][0] &&
                V[0] < y_x_boundary[V[1]][1] &&
                V[1] > x_y_boundary[V[0]][0] &&
                V[1] < x_y_boundary[V[0]][1])
                out++;
        }

        return out;
    }
};