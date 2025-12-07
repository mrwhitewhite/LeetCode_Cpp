#include "solution.cpp"

int main()
{
    Solution test_sol;

    vector<int> vec1 = {1,12,-5,-6,50,3}; // Output: 12.75000
    int k1 = 4;

    cout << test_sol.findMaxAverage(vec1, k1) << endl;
    
    return 0;
}