#include "solution.cpp"

int main()
{
    Solution test_sol;
    vector<int> n1 = {6, 3, 6};
    vector<int> n2 = {0,1,0,0};
    vector<int> n3 = {8,4,2,8,4};

    cout << test_sol.specialTriplets(n1) << endl; // output: 1
    cout << test_sol.specialTriplets(n2) << endl; // output: 1
    cout << test_sol.specialTriplets(n3) << endl; // output: 2
    return 0;
}