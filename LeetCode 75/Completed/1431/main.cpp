#include "solution.cpp"

int main()
{
    Solution test_sol;
    vector<int> candies = {2,3,5,1,3};
    int extra_candies = 3;
    vector<bool> out = test_sol.kidsWithCandies(candies, extra_candies);

    // loop through the out
    for (bool val : out) {
        cout << (val ? "true" : "false") << " ";
    }
    return 0;
}