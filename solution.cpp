#include <iostream>
#include <vector>
#include "tools.cpp"
using namespace std;

// class here
class Solution
{
public:
    int maxVowels(string s, int k)
    {
        int i = 0;
        int record_max = 0;
        int recording = 0;

        for (; i < k; i++)
        {
            if (check_vowel(s[i]))
            {
                record_max++;
                recording++;
            }
        }

        for (; i < s.size(); i++)
        {
            if (check_vowel(s[i - k]))
                recording--;

            if (check_vowel(s[i]))
                record_max = max(record_max, ++recording);
        }

        return record_max;
    }

    bool check_vowel(char c)
    {
        if (c == 'a' or
            c == 'e' or
            c == 'i' or
            c == 'o' or
            c == 'u')
            return true;
        else
            return false;
    }
};