#include "solution.cpp"

int main()
{
    Solution test_sol;
    vector<int> vec1 = {1, 8, 6, 2, 5, 4, 8, 3, 7}; // ans 49
    vector<int> vec2 = {1, 1};                      // ans 1
    cout << test_sol.maxArea(vec1) << endl;
    cout << test_sol.maxArea(vec2) << endl;
    return 0;
}