#include "solution.cpp"

int main()
{
    Solution test_sol;

    vector<int> apple1 = {1, 3, 2};
    vector<int> capacity1 = {4, 3, 1, 5, 2};
    vector<int> apple2 = {5,5,5};
    vector<int> capacity2 = {2,4,2,7};

    printn(test_sol.minimumBoxes(apple1, capacity1)); // Out: 2
    printn(test_sol.minimumBoxes(apple2, capacity2)); // Out: 4

    return 0;
}