#include "solution.cpp"

int main()
{
    Solution test_sol;
    vector<char> input = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    cout << test_sol.compress(input);
    return 0;
}