#include "solution.cpp"

int main()
{
    Solution test_sol;

    string s1 = "abciiidef"; // Expected output: 3
    int k1 = 3;

    cout << test_sol.maxVowels(s1, k1) << endl;

    return 0;
}