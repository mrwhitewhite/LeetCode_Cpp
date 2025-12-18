#include "solution.cpp"

int main()
{
    Solution test_sol;

    vector<int> v1 = {1, -3, 2, 3, -4};
    vector<int> v2 = {2, -5, 1, -4, 3, -2};

    cout << test_sol.maxAbsoluteSum(v1) << endl; // Out: 5
    cout << test_sol.maxAbsoluteSum(v2) << endl; // Out: 8

    return 0;
}