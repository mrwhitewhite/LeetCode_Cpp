#include "solution.cpp"

int main()
{
    Solution test_sol;

    string s1 = "YYNY";
    string s2 = "NNNNN";
    string s3 = "YYYY";

    printn(test_sol.bestClosingTime(s1)); // Out: 2
    printn(test_sol.bestClosingTime(s2)); // Out: 0
    printn(test_sol.bestClosingTime(s3)); // Out: 4

    return 0;
}