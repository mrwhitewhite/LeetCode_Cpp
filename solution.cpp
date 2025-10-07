#include <numeric>
#include <iostream>
using namespace std;

// class here
class Solution
{
public:
    string gcdOfStrings(string str1, string str2)
    {
        string out;
        string str1_factor = smallest_factor_str(str1);
        string str2_factor = smallest_factor_str(str2);
        string shorter_factor;
        string target_str1;
        string target_str2;
        int shorter_factor_len;
        int str1_len = str1.length();
        int str2_len = str2.length();
        int str1_factor_len = str1_factor.length();
        int str2_factor_len = str2_factor.length();
        int out_len;
        int str1_factor_count = str1_len / str1_factor_len;
        int str2_factor_count = str2_len / str2_factor_len;
        int common_greatest_factor_count = gcd(str1_factor_count, str2_factor_count);

        // get longer and shorter factor
        if (str1_factor_len <= str2_factor_len)
        {
            shorter_factor = str1_factor;
            shorter_factor_len = shorter_factor.length();
        }
        else
        {
            shorter_factor = str2_factor;
            shorter_factor_len = shorter_factor.length();
        };

        // get common factor
        out = repeat_string(shorter_factor, common_greatest_factor_count);
        out_len = out.length();

        // verify
        if (
            (str1 == repeat_string(out, str1_len / out_len)) and
            (str2 == repeat_string(out, str2_len / out_len)))
        {
            return out;
        } else
        {
            return "";
        };
    };

    string smallest_factor_str(string str_in)
    {
        string out;
        int str_len = str_in.length();
        int factor_count;

        for (char c : str_in)
        {
            out += c;

            // continue if not factor(based on division)
            if (str_len % out.length() != 0)
            {
                continue;
            }
            else
            {
                factor_count = str_len / out.length();
            };

            // return str_in if factor count == 1
            if (factor_count == 1)
            {
                return str_in;
            };

            // check factor using repeat_string
            if (repeat_string(out, factor_count) == str_in)
            {
                return out;
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