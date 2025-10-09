#include "solution.cpp"

int main()
{
    Solution test_sol;
    vector<int> input = {5, 4, 3, 2, 1};

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