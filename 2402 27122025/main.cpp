#include "solution.cpp"

int main()
{
    Solution test_sol;

    int n1 = 2;
    vector<vector<int>> v1 = {{0, 10}, {1, 5}, {2, 7}, {3, 4}};

    int n2 = 3;
    vector<vector<int>> v2 = {{1, 20}, {2, 10}, {3, 5}, {4, 9}, {6, 8}};

    printn(test_sol.mostBooked(n1, v1));
    printn(test_sol.mostBooked(n2, v2));

    return 0;
}