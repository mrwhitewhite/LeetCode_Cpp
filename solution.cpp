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
        return s;
    }

    tuple<int, int, int, string> findStartEnd(const string &input)
    {
        // tuple[0] = starting index of compression
        // tuple[1] = ending index of compression
        // tuple[2] = number of repeat
        // tuple[3] = compressed string
        int idx_start = -1;
        int idx_end = -1;
        string n_rep_str;
        string compressed_str;

        bool found_compression = false;
        int skip = 0;
        for (int i = 0; i < input.length(); i++)
        {
            if (found_compression == false)
            {
                if (isdigit(input[i])) // current char is digit
                {
                    n_rep_str += input[i];
                    if (idx_start == -1)
                        idx_start = i;
                }
                else if (input[i] == '[') // current char is [
                    found_compression = true;
            }
            else // found_compression == true
            {
                if (input[i] == '[')
                    skip++;
                else if (input[i] == ']')
                {
                    if (skip != 0)
                        skip--;
                    else if (skip == 0)
                    {
                        idx_end = i;
                        break;
                    }
                }
                else // input[i] be compressed_char
                    compressed_str += input[i];
            }
        }

        return {idx_start, idx_end, stoi(n_rep_str), compressed_str};
    }

    string repeat_string(const string &str, const int &nrep)
    {
        string out = "";
        for (int i = 0; i < nrep; i++)
            out += str;
        return out;
    }
};