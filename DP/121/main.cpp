#include "solution.cpp"

int main()
{
    Solution test_sol;

    vector<int> v1 = {7, 1, 5, 3, 6, 4};
    vector<int> v2 = {7, 6, 4, 3, 1};

    cout << test_sol.maxProfit(v1) << endl; // Out: 5
    cout << test_sol.maxProfit(v2) << endl; // Out: 0

    return 0;
}