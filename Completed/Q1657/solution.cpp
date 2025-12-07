#include <iostream>
#include <vector>
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

        int hashmap1[26] = {0};
        int hashmap2[26] = {0};

        // converting to hashmap
        for (char c : word1)
            hashmap1[c - 'a']++;
        for (char c : word2)
            hashmap2[c - 'a']++;

        // verifying transmutation
        for (int i = 0; i < 26; i++)
        {
            if (hashmap1[i] == 0 ^ hashmap2[i] == 0)
                return false;
        }

        sort(hashmap1, hashmap1 + 26);
        sort(hashmap2, hashmap2 + 26);

        for (int i = 0; i < 26; i++)
        {
            if (hashmap1[i] != hashmap2[i])
                return false;
        }

        return true;
    }
};