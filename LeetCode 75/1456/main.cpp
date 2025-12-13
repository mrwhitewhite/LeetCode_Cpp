#include "solution.cpp"

int main()
{
    Solution test_sol;

    string s1 = "abciiidef"; // Expected output: 3
    int k1 = 3;
    string s2 = "novowels"; // Expected output: 1
    int k2 = 1;

    cout << test_sol.maxVowels(s1, k1) << endl;
    // cout << test_sol.maxVowels(s2, k2) << endl;

    return 0;
}