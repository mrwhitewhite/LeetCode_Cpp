#include "solution.cpp"

int main()
{
    Solution test_sol;

    vector<int> v1 = {7, 1, 5, 3, 6, 4};
    vector<int> v2 = {1, 2, 3, 4, 5};
    vector<int> v3 = {7, 6, 4, 3, 1};

    cout << test_sol.maxProfit(v1) << endl; // Out: 7
    cout << test_sol.maxProfit(v2) << endl; // Out: 4
    cout << test_sol.maxProfit(v3) << endl; // Out: 0

    return 0;
}