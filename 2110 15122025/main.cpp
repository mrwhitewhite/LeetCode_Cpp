#include "solution.cpp"

int main()
{
    Solution test_sol;

    vector<int> e1 = {3, 2, 1, 4};
    vector<int> e2 = {8, 6, 7, 7};
    vector<int> e3 = {1};

    cout << test_sol.getDescentPeriods(e1) << endl;
    cout << test_sol.getDescentPeriods(e2) << endl;
    cout << test_sol.getDescentPeriods(e3) << endl;

    return 0;
}