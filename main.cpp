#include "solution.cpp"

int main()
{
    Solution test_sol;

    vector<int> vec1 = {5, 10, -5};
    vector<int> vec2 = {8, -8};
    vector<int> vec3 = {10, 2, -5};
    vector<int> vec4 = {3, 5, -6, 2, -1, 4};

    print_vector(test_sol.asteroidCollision(vec1)); // [5, 10]
    print_vector(test_sol.asteroidCollision(vec2)); // []
    print_vector(test_sol.asteroidCollision(vec3)); // [10]
    print_vector(test_sol.asteroidCollision(vec4)); // [-6, 2, 4]
    
    return 0;
}