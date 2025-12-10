#include "solution.cpp"

int main()
{
    Solution test_sol;

    string s1 = "leet**cod*e";
    string s2 = "erase*****";

    cout << test_sol.removeStars(s1) << endl; // "lecoe"
    cout << test_sol.removeStars(s2) << endl; // ""
    
    return 0;
}