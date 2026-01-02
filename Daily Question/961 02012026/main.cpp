#include "solution.cpp"

int main()
{
    Solution test_sol;

    vector<int> v1 = {1, 2, 3, 3};
    vector<int> v2 = {2, 1, 2, 5, 3, 2};
    vector<int> v3 = {5, 1, 5, 2, 5, 3, 5, 4};

    printn(test_sol.repeatedNTimes(v1)); // Out: 3
    printn(test_sol.repeatedNTimes(v2)); // Out: 2
    printn(test_sol.repeatedNTimes(v3)); // Out: 5

    return 0;
}