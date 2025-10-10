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
        int n = chars.size();
        string out = "";
        char current_char = chars.at(0);
        int count = 0;
        char c;

        for (int i = 0; i < n; ++i)
        {
            c = chars.at(i);
            // cout << "Current char: " << current_char << ", count: " << count << ", processing: " << c << endl;
            if (current_char != c or i == n - 1)
            {
                if(i==n-1)
                    count++;

                // recording
                if (count == 1)
                {
                    out = out + current_char;
                }
                else
                {
                    out = out + current_char + to_string(count);
                }

                // reset to new
                current_char = c;
                count = 1;
                continue;
            }
            else
            {
                count += 1;
            }
        }

        // cout << out << endl;
        return out.size();
    }
};