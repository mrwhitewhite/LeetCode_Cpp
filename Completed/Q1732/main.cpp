#include "solution.cpp"

int main()
{
    Solution test_sol;

    vector<int> vec1 = {-5, 1, 5, 0, -7};         // Expected output: 1
    vector<int> vec2 = {-4, -3, -2, -1, 4, 3, 2}; // Expected output: 0

    cout << test_sol.largestAltitude(vec1) << endl;
    cout << test_sol.largestAltitude(vec2) << endl;

    return 0;
}