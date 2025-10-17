#include "solution.cpp"
#include "tools.cpp"

int main()
{
    Solution test_sol;
    
    string s1 = "'abc";
    string t1 = "'ahbgdc";
    
    string s2 = "'axc";
    string t2 = "'ahbgdc";

    print_bool(test_sol.isSubsequence(s1, t1)); // Expected output: true
    print_bool(test_sol.isSubsequence(s2, t2)); // Expected output: false
    
    return 0;
}