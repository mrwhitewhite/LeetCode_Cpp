#include "solution.cpp"

int main()
{
    Solution test_sol;

    vector<int> vec1 = {1, 1, 0, 1};                // Output: 3
    vector<int> vec2 = {0, 1, 1, 1, 0, 1, 1, 0, 1}; // Output: 5
    vector<int> vec3 = {1, 1, 1};                   // Output: 2

    cout << test_sol.longestSubarray(vec1) << endl;
    // cout << test_sol.longestSubarray(vec2) << endl;
    // cout << test_sol.longestSubarray(vec3) << endl;
    return 0;
}