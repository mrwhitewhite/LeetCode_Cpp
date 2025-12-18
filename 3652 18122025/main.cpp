#include "solution.cpp"

int main()
{
    Solution test_sol;

    vector<int> p1 = {4, 2, 8};
    vector<int> s1 = {-1, 0, 1};
    int k1 = 2;

    vector<int> p2 = {5, 4, 3};
    vector<int> s2 = {1, 1, 0};
    int k2 = 2;

    vector<int> p3 = {1, 1};
    vector<int> s3 = {-1, -1};
    int k3 = 2;

    // cout << test_sol.maxProfit(p1, s1, k1) << endl; // Out: 10
    // cout << test_sol.maxProfit(p2, s2, k2) << endl; // Out: 9
    cout << test_sol.maxProfit(p3, s3, k3) << endl; // Out: 1

    return 0;
}