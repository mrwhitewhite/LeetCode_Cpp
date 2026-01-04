#include "solution.cpp"

int main()
{
    Solution test_sol;

    vector<int> v1 = {21, 4, 7};
    vector<int> v2 = {21, 21};
    vector<int> v3 = {1, 2, 3, 4, 5};

    printn(test_sol.sumFourDivisors(v1));
    printn(test_sol.sumFourDivisors(v2));
    printn(test_sol.sumFourDivisors(v3));

    return 0;
}