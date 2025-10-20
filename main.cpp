#include "solution.cpp"

int main()
{
    Solution test_sol;

    string q1_w1 = "'abc", q1_w2 = "'bca";
    string q2_w1 = "'uau", q2_w2 = "'ssx";
    string q3_w1 = "'cabbba", q3_w2 = "'abbccc";

    // print_bool(test_sol.closeStrings(q1_w1, q1_w2)); // expected: true
    print_bool(test_sol.closeStrings(q2_w1, q2_w2)); // expected: false
    // print_bool(test_sol.closeStrings(q3_w1, q3_w2)); // expected: true

    return 0;
}