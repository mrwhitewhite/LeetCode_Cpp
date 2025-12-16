#include "solution.cpp"

int main()
{
    Solution test_sol;

    int n1 = 2;
    int n2 = 3;
    int n3 = 4;

    cout << test_sol.fib(n1) << endl; // Out:1
    cout << test_sol.fib(n2) << endl; // Out:2
    cout << test_sol.fib(n3) << endl; // Out:3

    return 0;
}