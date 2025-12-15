#include "solution.cpp"

int main()
{
    Solution test_sol;

    vector<int> e1 = {3, 2, 1, 4};
    vector<int> e2 = {8, 6, 7, 7};
    vector<int> e3 = {1};
    vector<int> e4 = {12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 4, 3, 10, 9, 8, 7};

    cout << test_sol.getDescentPeriods(e1) << endl; // out: 7
    cout << test_sol.getDescentPeriods(e2) << endl; // out: 4
    cout << test_sol.getDescentPeriods(e3) << endl; // out: 1
    cout << test_sol.getDescentPeriods(e4) << endl; // out: 68

    return 0;
}