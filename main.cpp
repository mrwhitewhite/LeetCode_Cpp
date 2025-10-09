#include "solution.cpp"
void print_vector(vector<int> vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main()
{
    Solution test_sol;
    vector<int> input = {1,2,0,3,4};
    print_vector(test_sol.productExceptSelf(input));
    return 0;
}

