#include "solution.cpp"

int main()
{
    Solution test_sol;

    string s0 = "2[abc]";
    string s1 = "2[abc]gth";
    string s2 = "2[abc]a3[bc]";
    string s3 = "2[2[b]]";
    string s4 = "3[a2[c]]";
    string s5 = "3[a2[c]]abc2[hhh]";
    string s6 = "3[a]2[bc]";
    string s7 = "100[leetcode]";

    cout << test_sol.decodeString(s0) << endl; // expected: "abcabc"
    cout << test_sol.decodeString(s1) << endl; // expected: "abcabcgth"
    cout << test_sol.decodeString(s2) << endl; // expected: "abcabcabcbcbc"
    cout << test_sol.decodeString(s3) << endl; // expected: "bbbb"
    cout << test_sol.decodeString(s4) << endl; // expected: "accaccacc"
    cout << test_sol.decodeString(s5) << endl; // expected: "accaccaccabchhhhhh"
    cout << test_sol.decodeString(s6) << endl; // expected: "aaabcbc"
    cout << test_sol.decodeString(s7) << endl; // expected: "leetcodeleetcode...leetcode" (100 times)

    return 0;
}