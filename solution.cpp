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
        string factor_of_short_str;
        string short_str = str1.length() < str2.length() ? str1 : str2;
        string long_str = str1.length() >= str2.length() ? str1 : str2;
        int str1_len = str1.length();
        int str2_len = str2.length();
        int short_str_len = short_str.length();
        int factor_of_short_str_len;
        int factor_count_str1;
        int factor_count_str2;
        int factor_count_gcd;

        // verify gcd availability
        // if (!check_gcd_availability(str1, str2))
        // {
        //     return "";
        // };

        // find lcd
        factor_of_short_str = lcd_string(short_str);
        factor_of_short_str_len = factor_of_short_str.length();
        factor_count_str1 = str1_len / factor_of_short_str_len;
        factor_count_str2 = str2_len / factor_of_short_str_len;
        factor_count_gcd = gcd(factor_count_str1, factor_count_str2);

        // verify
        out = repeat_string(factor_of_short_str, factor_count_gcd);
        if (long_str == repeat_string(factor_of_short_str, str1_len >= str2_len ? factor_count_str1 : factor_count_str2))
        {
            return out;
        }
        else
        {
            return "";
        };
    };

    string lcd_string(string string_in)
    {
        string out;
        int str_len = string_in.length();

        for (int i = 1; i <= str_len; i++)
        {
            int factor_count = str_len / i;
            int word_count = i;
            out = string_in.substr(0, i);

            if (string_in == repeat_string(out, factor_count))
            {
                return out;
            };
        };
        return string_in;
    };

    bool check_gcd_availability(string str1, string str2)
    {
        string out;
        string tmp_str1_out;
        string tmp_str2_out;
        int str1_len = str1.length();
        int str2_len = str2.length();

        for (int i = 0; i < min(str1_len, str2_len); i++)
        {
            char _str1_char = str1[i];
            char _str2_char = str2[i];

            if (_str1_char != _str2_char)
            {
                return false;
            };
        };
        return true;
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