#include "solution.cpp"

int main()
{
    Solution test_sol;

    vector<int> v1 = {1, 2, 3};
    int k1 = 2;
    vector<int> v2 = {1, 1, 1, 1};
    int k2 = 2;
    vector<int> v3 = {2, 3, 4, 5};
    int k3 = 1;

    printn(test_sol.maximumHappinessSum(v1, k2)); // Out: 4
    printn(test_sol.maximumHappinessSum(v2, k2)); // Out: 1
    printn(test_sol.maximumHappinessSum(v3, k3)); // Out: 5

    return 0;
}