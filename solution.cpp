#include <numeric>
#include <iostream>
using namespace std;

// class here
class Solution
{
public:
    string gcdOfStrings(string str1, string str2)
    {
        string lcd;
        int lcd_len;
        int str1_len = str1.length();
        int str2_len = str2.length();
        int factor_count_1;
        int factor_count_2;
        int factor_common_count;
        bool commutative_test;
        // make sure length str1 >= str2
        // if (str1_len < str2_len)
        // {
            //     swap(str1, str2);
            // };
            
        // commutative test (true if valid)
        commutative_test = (str1+str2) != (str2+str1);
        if (commutative_test){
            return "";
        };
            
        // get lcd
        lcd = lcdOfStr(str2);
        lcd_len = lcd.length();

        // get factor count
        factor_count_1 = str1_len / lcd_len;
        factor_count_2 = str2_len / lcd_len;
        factor_common_count = gcd(factor_count_1, factor_count_2);

        // return gcd
        return repeat_string(lcd, factor_common_count);
    };

    string lcdOfStr(string str1){
        string out;
        int out_len;
        int str_len = str1.length();

        for(char c:str1){
            out += c;
            out_len = out.length();

            if(str_len % out_len == 0){
                if (str1 == repeat_string(out, str_len / out_len)){
                    return out;
                };
            };
        };

        return str1;
    }

    string repeat_string(string str1, int count)
    {
        string out;
        for (int i = 0; i < count; i++)
        {
            out += str1;
        };
        return out;
    };
};