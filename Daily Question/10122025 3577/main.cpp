#include "solution.cpp"

int main()
{
    Solution test_sol;

    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {3, 3, 3, 4, 4, 4};
    vector<int> v3 = {12, 43, 90, 30, 62, 73, 30};

    cout << test_sol.countPermutations(v1) << endl; // Output: 2
    cout << test_sol.countPermutations(v2) << endl; // Output: 0
    cout << test_sol.countPermutations(v3) << endl; // Output: 720

    return 0;
}