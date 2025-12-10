#include "solution.cpp"

int main()
{
    Solution test_sol;

    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {3, 3, 3, 4, 4, 4};

    cout << test_sol.countPermutations(v1) << endl; // Output: 2
    cout << test_sol.countPermutations(v2) << endl; // Output: 0

    return 0;
}