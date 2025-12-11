#include "solution.cpp"

int main()
{
    Solution test_sol;

    int n1 = 3;
    vector<vector<int>> buildings1 = {{1, 2}, {2, 2}, {3, 2}, {2, 1}, {2, 3}};
    int n2 = 3;
    vector<vector<int>> buildings2 = {{1, 1}, {1, 2}, {2, 1}, {2, 2}};
    int n3 = 5;
    vector<vector<int>> buildings3 = {{1, 3}, {3, 2}, {3, 3}, {3, 5}, {5, 3}};
    int n4 = 3;
    vector<vector<int>> buildings4 = {{2, 1}, {2, 3}, {3, 3}, {2, 2}, {1, 3}};
    int n5 = 3;
    vector<vector<int>> buildings5 = {{1, 2}, {2, 1}, {3, 1}, {1, 1}, {2, 3}, {1, 3}};
    int n6 = 4;
    vector<vector<int>> buildings6 = {{4, 4}, {2, 4}, {3, 4}, {2, 1}, {4, 3}, {4, 1}, {3, 1}, {1, 1}, {1, 4}, {4, 2}, {2, 2}, {3, 2}, {1, 3}};

    // cout << test_sol.countCoveredBuildings(n1, buildings1) << endl; // Out: 1
    // cout << test_sol.countCoveredBuildings(n2, buildings2) << endl; // Out: 0
    // cout << test_sol.countCoveredBuildings(n3, buildings3) << endl; // Out: 1
    // cout << test_sol.countCoveredBuildings(n4, buildings4) << endl; // Out: 0
    // cout << test_sol.countCoveredBuildings(n5, buildings5) << endl; // Out: 0
    cout << test_sol.countCoveredBuildings(n6, buildings6) << endl; // Out: 1

    return 0;
}