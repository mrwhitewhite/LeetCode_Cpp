#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

// class here
class Solution
{
public:
    string reverseVowels(string s)
    {
        vector<char> stored_vowels;
        vector<int> stored_index;

        // find the vowel and indexs
        for (int i = 0; i < s.length(); i++)
        {
            if (isVowel(s.at(i)))
            {
                stored_vowels.push_back(s.at(i));
                stored_index.push_back(i);
            }
        }

        // reverse vowel
        vector<char>::iterator it_vowels = stored_vowels.end();

        for(int i : stored_index){
            s.at(i) = *(--it_vowels);
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