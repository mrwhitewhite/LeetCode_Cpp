#include "solution.cpp"

int main()
{
    Solution test_sol;
    vector<int> input = {20, 100, 10, 12, 5, 13}; // 10, 12,13

    if (test_sol.increasingTriplet(input))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    return 0;
}