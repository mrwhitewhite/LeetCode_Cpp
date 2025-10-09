#include "solution.cpp"

int main()
{
    Solution test_sol;
    vector<int> input = {1,2,3,4,5};
    
    if(test_sol.increasingTriplet(input))
        cout << "true";
    else
        cout << "false";
        
    return 0;
}