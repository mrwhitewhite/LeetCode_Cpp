#include "solution.cpp"

int main()
{
    Solution test_sol;

    vector<vector<int>> vec1 = {
        {3, 2, 1},
        {1, 7, 6},
        {2, 7, 7}};
    vector<vector<int>> vec2 = {
        {3, 1, 2, 2},
        {1, 4, 4, 5},
        {2, 4, 2, 2},
        {2, 4, 2, 2}};

    cout << test_sol.equalPairs(vec1) << endl; // 1
    cout << test_sol.equalPairs(vec2) << endl; // 3

    return 0;
}