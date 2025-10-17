#include <iostream>
#include <vector>
#include <string>
using namespace std;

// class here
class Solution
{
public:
    int compress(vector<char> &chars)
    {
        int count = 0;
        string text;
        int i = 0;
        bool looping = true;
        char counting_char = chars.at(0);

        while (looping)
        {
            char _char = chars.at(i);

            // continue counting
            if (_char == counting_char)
            {
                if (i < chars.size() - 1)
                {
                    chars.erase(chars.begin() + i);
                    count++;
                    continue;
                }
                else
                {
                    chars.erase(chars.begin() + i);
                    count++;
                    looping = false;
                }
            }

            // generate text
            if (count == 1)
                text = counting_char;
            else
                text = counting_char + to_string(count);

            // erase and add to vector chars
            for (char _c : text)
            {
                chars.insert(chars.begin() + i, 1, _c);
                i++;
            }

            //  reset counter
            counting_char = _char;
            count = 0;
        }

        return chars.size();
    }

    void print_vector(vector<char> in)
    {
        for (char s : in)
        {
            cout << s << " ";
        }
        cout << endl;
    }
};