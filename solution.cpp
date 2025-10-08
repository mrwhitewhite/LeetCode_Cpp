#include <array>
#include <deque>
#include <algorithm>
#include <cctype>
#include <iostream>
using namespace std;

// class here
class Solution
{
public:
    string reverseVowels(string s)
    {
        deque<char> stored_vowels;
        deque<int> stored_index;
        int len = s.length();
        int list_len;

        // find the vowel and indexs
        for (int i = 0; i < len; i++)
        {
            if (isVowel(s.at(i)))
            {
                stored_vowels.push_front(s.at(i));
                stored_index.push_back(i);
            }
            else
            {
                continue;
            }
        }

        // reverse vowel
        for (int j = 0; j < stored_vowels.size(); j++)
        {
            s.at(stored_index.at(j)) = stored_vowels.at(j);
        }

        return s;
    }

    bool isVowel(char s)
    {
        char s_lower = (char)tolower(s);
        if (
            s_lower == 'a' or
            s_lower == 'e' or
            s_lower == 'i' or
            s_lower == 'o' or
            s_lower == 'u')
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};