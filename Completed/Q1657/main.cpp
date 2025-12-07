#include "solution.cpp"

int main()
{
    Solution test_sol;

    // abc, bca => true
    string q1_w1 = "abc", q1_w2 = "bca";
    print_bool(test_sol.closeStrings(q1_w1, q1_w2));

    // uau, ssx => false
    string q2_w1 = "uau", q2_w2 = "ssx";
    print_bool(test_sol.closeStrings(q2_w1, q2_w2));

    // cabbba, abbccc => true
    string q3_w1 = "cabbba", q3_w2 = "abbccc";
    print_bool(test_sol.closeStrings(q3_w1, q3_w2));

    // aaabbbbccddeeeeefffff, aaaaabbcccdddeeeeffff => false
    string q4_w1 = "aaabbbbccddeeeeefffff", q4_w2 = "aaaaabbcccdddeeeeffff";
    print_bool(test_sol.closeStrings(q4_w1, q4_w2));

    return 0;
}