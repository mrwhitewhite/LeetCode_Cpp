#include "solution.cpp"

int main()
{
    Solution test_sol;
    vector<int> flowerbed = {1};
    int n = 1;
    bool out = test_sol.canPlaceFlowers(flowerbed, n);
    
    // print bool
    if (out)
        std::cout << "true";
    else
        std::cout << "false";
    
    return 0;
}