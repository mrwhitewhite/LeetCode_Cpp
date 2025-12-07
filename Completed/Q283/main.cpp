#include "solution.cpp"

void print_vector(const vector<int> &vec)
{
    for (const auto &val : vec)
    {
        cout << val << " ";
    }
    cout << endl;
}

int main()
{
    Solution test_sol;
    vector<int> in = {0, 1, 0, 3, 12};
    test_sol.moveZeroes(in);
    print_vector(in);
    return 0;
}
