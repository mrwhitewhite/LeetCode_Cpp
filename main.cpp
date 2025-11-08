#include "solution.cpp"

int main()
{
    Solution test_sol;

    string s1 = "2[2[b]]";
    string s2 = "3[a2[c]]";
    string s3 = "2[abc]3[cd]ef";

    cout << test_sol.decodeString(s1) << endl; // expected: "bbbb"
    cout << test_sol.decodeString(s2) << endl; // expected: "accaccacc"
    cout << test_sol.decodeString(s3) << endl; // expected: "abcabccdcdcdef"

    return 0;
}