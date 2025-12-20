#include "solution.cpp"

int main()
{
    Solution test_sol;

    vector<string> v1 = {"cba", "daf", "ghi"};
    vector<string> v2 = {"a", "b"};
    vector<string> v3 = {"zyx", "wvu", "tsr"};

    cout << test_sol.minDeletionSize(v1) << endl; // Out: 1
    cout << test_sol.minDeletionSize(v2) << endl; // Out: 0
    cout << test_sol.minDeletionSize(v3) << endl; // Out: 3

    return 0;
}