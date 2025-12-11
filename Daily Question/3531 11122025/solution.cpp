#include <iostream>
#include <vector>
#include <unordered_map>
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
        vector<pair<int, int>> x_y_boundary(max_coor + 1, make_pair(max_coor + 1, 0));
        vector<pair<int, int>> y_x_boundary(max_coor + 1, make_pair(max_coor + 1, 0));

        for (vector<int> &V : b)
        {
            x_y_boundary[V[0]].first = min(x_y_boundary[V[0]].first, V[1]);
            x_y_boundary[V[0]].second = max(x_y_boundary[V[0]].second, V[1]);
            y_x_boundary[V[1]].first = min(y_x_boundary[V[1]].first, V[0]);
            y_x_boundary[V[1]].second = max(y_x_boundary[V[1]].second, V[0]);
        }

        for (vector<int> &V : b)
        {
            if (
                V[0] > y_x_boundary[V[1]].first &&
                V[0] < y_x_boundary[V[1]].second &&
                V[1] > x_y_boundary[V[0]].first &&
                V[1] < x_y_boundary[V[0]].second)
                out++;
        }

        return out;
    }
};