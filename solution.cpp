#include <deque>
#include <algorithm>
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

        // find the vowel and indexs
        for (int i = 0; i < s.length(); i++)
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
        if (
            s == 'a' or
            s == 'e' or
            s == 'i' or
            s == 'o' or
            s == 'u' or
            s == 'A' or
            s == 'E' or
            s == 'I' or
            s == 'O' or
            s == 'U')
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};