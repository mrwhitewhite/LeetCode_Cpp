#include "solution.cpp"

int main()
{
    Solution test_sol;
    vector<int> vec1 = {1, 2, 3, 4}; // output: 2
    int k1 = 5;
    vector<int> vec2 = {3, 1, 3, 4, 3}; // output: 1
    int k2 = 6;
    vector<int> vec3 = {4,4,1,3,1,3,2,2,5,5,1,5,2,1,2,3,5,4}; // output: 2
    int k3 = 2;
    vector<int> vec4 = {2,5,4,4,1,3,4,4,1,4,4,1,2,1,2,2,3,2,4,2}; // output: 4
    int k4 = 3;
    vector<int> vec5 = {2,2,2,3,1,1,4,1}; // output: 2
    int k5 = 4;

    cout << test_sol.maxOperations(vec1, k1) << endl;
    cout << test_sol.maxOperations(vec2, k2) << endl;
    cout << test_sol.maxOperations(vec3, k3) << endl;
    cout << test_sol.maxOperations(vec4, k4) << endl;
    cout << test_sol.maxOperations(vec5, k5) << endl;
    return 0;
}