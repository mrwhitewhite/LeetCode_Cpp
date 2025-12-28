#include "solution.cpp"

int main()
{
    Solution test_sol;

    vector<vector<int>> v1 = {{4, 3, 2, -1}, {3, 2, 1, -1}, {1, 1, -1, -2}, {-1, -1, -2, -3}};
    vector<vector<int>> v2 = {{3, 2}, {1, 0}};
    vector<vector<int>> v3 = {{5, 1, 0}, {-5, -5, -5}};

    // printn(test_sol.countNegatives(v1)); // Out: 8
    // printn(test_sol.countNegatives(v2)); // Out: 0
    printn(test_sol.countNegatives(v3)); // Out: 3

    return 0;
}