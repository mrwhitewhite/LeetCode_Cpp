#include <iostream>
using namespace std;

// class here
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        // def variable
        string out = "";
        string longer_str;
        string shorter_str;
        string longer_remains;
        int shorter_len;
        int longer_len;
        int word1_len = word1.length();
        int word2_len = word2.length();

        // find which longer and shorter
        if (word1_len >= word2_len) {
            longer_str = word1;
            longer_len = word1_len;
            shorter_str = word2;
            shorter_len = word2_len;
        } else {
            longer_str = word2;
            longer_len = word2_len;
            shorter_str = word1;
            shorter_len = word1_len;
        };

        // substr
        if (word1_len != word2_len) {
            longer_remains =
                longer_str.substr(shorter_len, longer_len - shorter_len);
        };

        for (int i = 0; i < shorter_len; i++) {
            out += word1[i];
            out += word2[i];
        }

        // append extra word
        if (!longer_remains.empty()) {
            return out + longer_remains;
        } else {
            return out;
        }
    };
};