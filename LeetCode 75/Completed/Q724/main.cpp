#include "solution.cpp"

int main()
{
    Solution test_sol;

    vector<int> vec1 = {1, 7, 3, 6, 5, 6}; // Expected output: 3
    vector<int> vec2 = {1, 2, 3};          // Expected output: -1
    vector<int> vec3 = {2, 1, -1};         // Expected output: 0

    cout << "Pivot Index of vec1: " << test_sol.pivotIndex(vec1) << endl;
    cout << "Pivot Index of vec2: " << test_sol.pivotIndex(vec2) << endl;
    cout << "Pivot Index of vec3: " << test_sol.pivotIndex(vec3) << endl;

    return 0;
}