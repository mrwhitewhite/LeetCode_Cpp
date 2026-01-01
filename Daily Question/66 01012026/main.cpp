#include "solution.cpp"

int main()
{
    Solution test_sol;

    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {4, 3, 2, 1};
    vector<int> v3 = {9};
    vector<int> v4 = {9, 9, 9, 9, 9, 9, 9, 9};

    print_vector(test_sol.plusOne(v1)); // Out: [1,2,4]
    print_vector(test_sol.plusOne(v2)); // Out: [4,3,2,2]
    print_vector(test_sol.plusOne(v3)); // Out: [1,0]
    print_vector(test_sol.plusOne(v4)); // Out: [1,0,0,0,0,0,0,0,0]

    return 0;
}