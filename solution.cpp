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
            char out = s[i - k];
            char in = s[i];

            cout << out << " " << in << endl;

            if (check_vowel(out))
            {
                cout << "decrease" << endl;
                recording--;
            }

            if (check_vowel(in))
            {
                cout << "increase" << endl;
                recording++;
                record_max = max(record_max, recording);
            }

            cout << recording << endl;
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