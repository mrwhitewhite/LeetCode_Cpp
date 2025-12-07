#include "solution.cpp"

int main()
{
    Solution test_sol;

    vector<int> vec1 = {1, 2, 2, 1, 1, 3};
    vector<int> vec2 = {1, 2};
    vector<int> vec3 = {-3, 0, 1, -3, 1, 1, 1, -3, 10, 0};

    print_bool(test_sol.uniqueOccurrences(vec1)); // expected: true
    print_bool(test_sol.uniqueOccurrences(vec2)); // expected: false
    print_bool(test_sol.uniqueOccurrences(vec3)); // expected: true
    return 0;
}