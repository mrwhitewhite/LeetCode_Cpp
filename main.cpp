#include "solution.cpp"

int main()
{
    Solution test_sol;
    vector<char> input1 = {'a'};
    vector<char> input2 = {'a', 'a', 'a', 'b', 'b', 'c', 'c'};
    cout << test_sol.compress(input1) << endl;;
    cout << test_sol.compress(input2);
    return 0;
}