#include "solution.cpp"

int main()
{
    Solution test_sol;
    vector<int> vec1 = {1,1,1,0,0,0,1,1,1,1,0}; // Expected output: 6
    int k1 = 2;

    cout << test_sol.longestOnes(vec1, k1) << endl;
    return 0;
}