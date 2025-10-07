#include <iostream>
using namespace std;

// class here
class Solution
{
public:
    string gcdOfStrings(string str1, string str2)
    {
        int longer_len;
        int shorter_len;
        string shorter_str;
        string longer_str;
        string str1_factor;
        string str2_factor;
        string out;

        // get string length
        if (str1.length() >= str2.length())
        {
            longer_len = str1.length();
            shorter_len = str2.length();
        }
        else
        {
            longer_len = str2.length();
            shorter_len = str1.length();
        };

        // get factor
        str1_factor = string_factor(str1);
        str2_factor = string_factor(str2);

        // if all same return the factor ; else return ""
        if (str1_factor == str2_factor)
        {
            return str1_factor;
        }
        else
        {
            return "";
        };
    };

    string string_factor(string str_in)
    {
        string out;
        int str_len = str_in.length();
        int factor_count;

        for (char c : str_in)
        {
            out += c;

            // factor count ; continue if invalid
            if (str_len % out.length() != 0)
            {
                continue;
            }
            else
            {
                factor_count = str_len / out.length();
            };

            // check factor using repeat_string
            if (repeat_string(out, factor_count) == str_in)
            {
                return out;
            };

            // return "" if invalid
            if (factor_count == 1)
            {
                return "";
            };
        };

        return out;
    };

    string repeat_string(string str_in, int count)
    {
        string out = "";
        for (int i = 0; i < count; i++)
        {
            out += str_in;
        };
        return out;
    };
};