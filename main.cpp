#include "solution.cpp"
#include "tools.cpp"

int main()
{
    Solution test_sol;
    vector<int> vec1 = {1, 2, 3, 4}; // output: 2
    int k1 = 5;
    vector<int> vec2 = {3, 1, 3, 4, 3}; // output: 1
    int k2 = 6;

    cout << test_sol.maxOperations(vec1, k1) << endl;
    cout << test_sol.maxOperations(vec2, k2) << endl;
    return 0;
}