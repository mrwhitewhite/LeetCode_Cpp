#include <vector>
#include <iostream>
#include <vector>
#include "tools.cpp"
using namespace std;

// class here
class Solution
{
public:
    string reverseWords(string s)
    {
        s.push_back(' '); // end the string with space for compatability

        vector<string> word_vector;
        string tmp_string;
        string out;
        int len = s.length();
        int i = 0;
        bool isrecording = false; // set to true if recording a word

        // get first index after remove trailing spce
        for (i; i < len; i++)
        {
            char _current_char = s.at(i);

            // skip leading space
            if (_current_char == ' ')
            {
                continue;
            }
            else
            {
                break;
            }
        }

        // get word into vector
        for (i; i < len; i++)
        {
            char _current_char = s.at(i);

            // stop recording
            if (_current_char == ' ' and isrecording)
            {
                word_vector.push_back(tmp_string);
                tmp_string.clear();
                isrecording = false;
                continue;
            };

            // record word
            if (_current_char != ' ')
            {
                isrecording = true;
                tmp_string += _current_char;
                continue;
            }
        }

        // turn vector into string of text
        vector<string>::reverse_iterator it;
        for (it = word_vector.rbegin(); it != word_vector.rend(); it++)
        {
            out += *it;
            out += " ";
        }

        // remove last space
        out.pop_back();

        return out;
    }
};