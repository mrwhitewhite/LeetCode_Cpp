#include "solution.cpp"

int main()
{
    Solution test_sol;

    cout << test_sol.countTriples(5) << endl;  // Output: 2
    cout << test_sol.countTriples(10) << endl; // Output: 4
    cout << test_sol.countTriples(18) << endl; // Output: 10

    return 0;
}