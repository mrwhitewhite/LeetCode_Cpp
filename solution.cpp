#include <iostream>
#include <vector>
#include <tuple>
#include <string>
#include "tools.cpp"
using namespace std;

// class here
class Solution
{
public:
    string decodeString(string s)
    {
        string rep_word = "";
        int start_int_i = -1;
        int end_int_i = -1;     // index of [
        int end_replace_i = -1; // index of ]

        for (int i = 0; i < s.length(); i++)
        {
            if (isdigit(s[i]) && start_int_i == -1) // detect first occurence of digit
            {
                start_int_i = i;
            }
            else if (isdigit(s[i]) && end_int_i != -1) // trigger when found nested ; by detect first digit after found '['
            {
                rep_word = decodeString(s.substr(i, s.length() - i)); // decode from i to end, eg. 3[a]]bc -> aaa]bc

                // replace
                s = s.replace(i, s.length() - i, rep_word); // eg. 2[3[a]]bc -> 2[aaa]bc

                // reset
                rep_word = "";
            }
            else if (s[i] == '[' && end_int_i == -1)
            {
                end_int_i = i;
            }
            else if (s[i] == ']' && start_int_i != -1)
            {
                end_replace_i = i;

                // get info and replace
                rep_word = s.substr(end_int_i + 1, end_replace_i - end_int_i - 1);
                rep_word = repeat_string(rep_word, s.substr(start_int_i, end_int_i - start_int_i));
                s = s.replace(start_int_i, end_replace_i - start_int_i + 1, rep_word);

                // offset the i if extracted txt is shorter than compressed
                if (end_replace_i - start_int_i + 1 - rep_word.length() > 0 && end_replace_i - start_int_i + 1 - rep_word.length() <= i)
                    i -= end_replace_i - start_int_i + 1 - rep_word.length();

                // reset
                rep_word = "";
                start_int_i = -1;
                end_int_i = -1;
                end_replace_i = -1;
            }
        }
        return s;
    }

    string repeat_string(const string &str, const string &nrep)
    {
        string out = "";
        while (out.length() < (stoi(nrep) * str.length()))
            out += str;
        return out;
    }
};