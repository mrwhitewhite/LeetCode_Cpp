#include "solution.cpp"

int main()
{
    Solution test_sol;

    vector<string> c1 = {"SAVE20", "", "PHARMA5", "SAVE@20"};
    vector<string> b1 = {"restaurant", "grocery", "pharmacy", "restaurant"};
    vector<bool> i1 = {true, true, true, true};

    vector<string> c2 = {"GROCERY15", "ELECTRONICS_50", "DISCOUNT10"};
    vector<string> b2 = {"grocery", "electronics", "invalid"};
    vector<bool> i2 = {false, true, true};

    print_vector(test_sol.validateCoupons(c1, b1, i1)); // "PHARMA5","SAVE20"
    print_vector(test_sol.validateCoupons(c2, b2, i2)); // ELECTRONICS_50
    return 0;
}