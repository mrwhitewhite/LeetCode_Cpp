#include <iostream>
#include <vector>
using namespace std;

// class here
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> out;
        vector<int> prefix(n, 1);
        vector<int> suffix(n, 1);

        for(int i = 0 ; i<n ; i++){
            int j = n-i-1;
            
            if(i+1 < n) // make sure dont out of prefix range
                prefix.at(i+1) = nums.at(i) * prefix.at(i);
            if(j-1 >= 0) // make sure dont out of suffix range
                suffix.at(j-1) = suffix.at(j) * nums.at(j);
        };

        for(int i = 0 ; i<n ; i++){
            out.push_back(prefix.at(i) * suffix.at(i));
        };

        return out;
    }
};