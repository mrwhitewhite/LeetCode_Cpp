#include "solution.cpp"

int main()
{
    Solution test_sol;
    vector<int> input = {0,4,2,1,0,-1,-3}; 
    // vector<int> input = {2,4,-2,-3}; // false

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