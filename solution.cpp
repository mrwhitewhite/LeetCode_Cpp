#include <iostream>
#include <vector>
#include <unordered_set>
#include "tools.cpp"
using namespace std;

// class here
class Solution
{
public:
    bool closeStrings(string word1, string word2)
    {
        int hashmap1[26] = {0}; // index: 0-25
        int hashmap2[26] = {0}; // index: 0-25
        unordered_set<int> set1 = {};
        unordered_set<int> set2 = {};

        // converting to hashmap
        for (char c : word1)
        {
            hashmap1[to_hashValue(c)]++;
        }
        for (char c : word2)
        {
            hashmap2[to_hashValue(c)]++;
        }

        // verifying same hashmap
        for (int i = 0; i < 26; i++)
        {
            set1.insert(hashmap1[i]);
            set2.insert(hashmap2[i]);
        }

        if (set1 == set2)
            return true;
        return false;
    }

    inline int to_hashValue(char alphabet)
    {
        // range 0-25
        return alphabet - 'a';
    }
};