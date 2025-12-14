#include "solution.cpp"

int main()
{
    Solution test_sol;

    string eg1 = "SSPPSPS";
    string eg2 = "PPSPSP";
    string eg3 = "S";

    cout << test_sol.numberOfWays(eg1) << endl; // out: 3
    cout << test_sol.numberOfWays(eg2) << endl; // out: 1
    cout << test_sol.numberOfWays(eg3) << endl; // out: 0

    return 0;
}