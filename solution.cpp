#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
#include "tools.cpp"
using namespace std;

// class here
class Solution
{
public:
    bool closeStrings(string word1, string word2)
    {
        vector<int> hashmap1(26, 0);
        vector<int> hashmap2(26, 0);
        int n = word1.size();

        if (n != word2.size())
            return false;

        // converting to hashmap
        for (int i = 0; i < n; i++)
        {
            hashmap1[to_hashValue(word1[i])]++;
            hashmap2[to_hashValue(word2[i])]++;
        }

        // verifying same hashmap
        sort(hashmap1.begin(), hashmap1.end());
        sort(hashmap2.begin(), hashmap2.end());

        if (hashmap1 == hashmap2)
            return true;
        return false;
    }

    inline int to_hashValue(char alphabet)
    {
        // range 0-25
        return alphabet - 'a';
    }
};