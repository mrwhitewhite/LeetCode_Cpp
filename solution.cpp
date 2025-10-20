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
        if (word1.size() != word2.size())
            return false;
        unordered_set<int> set1 = {};
        unordered_set<int> set2 = {};
        int hashmap1[26] = {0};
        int hashmap2[26] = {0};

        // converting to hashmap
        for (char c : word1)
            hashmap1[to_hashValue(c)]++;
        for (char c : word2)
            hashmap2[to_hashValue(c)]++;

        // verifying transmutation
        for (int i = 0; i < 26; i++)
        {
            set1.insert(hashmap1[i]);
            set2.insert(hashmap2[i]);
            if (hashmap1[i] == 0 ^ hashmap2[i] == 0)
                return false;
        }

        if (hashmap1 == hashmap2)
            return true;
        return true;
    }

    inline int to_hashValue(char alphabet)
    {
        // range 0-25
        return alphabet - 'a';
    }
};