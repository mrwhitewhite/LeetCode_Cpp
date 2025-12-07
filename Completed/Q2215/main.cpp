#include "solution.cpp"

// print vector<vector<int>>
void printVectorOfVector(const vector<vector<int>> &vec)
{
    cout << "[";
    for (size_t i = 0; i < vec.size(); ++i)
    {
        cout << "[";
        for (size_t j = 0; j < vec[i].size(); ++j)
        {
            cout << vec[i][j];
            if (j != vec[i].size() - 1)
                cout << ", ";
        }
        cout << "]";
        if (i != vec.size() - 1)
            cout << ", ";
    }
    cout << "]" << endl;
}

int main()
{
    Solution test_sol;

    // Input: nums1 = [1,2,3], nums2 = [2,4,6]
    vector<int> eg1_nums1 = {1, 2, 3};
    vector<int> eg1_nums2 = {2, 4, 6};

    // Input: nums1 = [1,2,3,3], nums2 = [1,1,2,2]
    vector<int> eg2_nums1 = {1, 2, 3, 3};
    vector<int> eg2_nums2 = {1, 1, 2, 2};

    printVectorOfVector(test_sol.findDifference(eg1_nums1, eg1_nums2)); // Expected Output: [[1,3],[4,6]]
    printVectorOfVector(test_sol.findDifference(eg2_nums1, eg2_nums2)); // Expected Output: [[3],[]]
    
    return 0;
}