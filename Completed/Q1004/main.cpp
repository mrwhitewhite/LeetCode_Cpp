#include "solution.cpp"

int main()
{
    Solution test_sol;

    vector<int> vec1 = {1,1,1,0,0,0,1,1,1,1,0}; // Expected output: 6
    int k1 = 2;
    vector<int> vec2 = {0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1}; // Expected output: 10
    int k2 = 3; 

    vector<int> vec3 = {0,0,0,1}; // Expected output: 1
    int k3 = 4;

    cout << test_sol.longestOnes(vec1, k1) << endl;
    cout << test_sol.longestOnes(vec2, k2) << endl;
    cout << test_sol.longestOnes(vec3, k3) << endl;
    return 0;
}