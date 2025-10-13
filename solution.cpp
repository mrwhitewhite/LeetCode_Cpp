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
        vector<string> out;
        char current_char = chars.at(0);
        int count = 0;
        char c;

        for (int i = 0; i < n; ++i)
        {
            c = chars.at(i);
            // cout << "Current char: " << current_char << ", count: " << count << ", processing: " << c << endl;
            if (c == current_char)
            {
                count++;

                // last element
                if (i == n - 1)
                {
                    out.push_back(to_string(current_char));
                    out.push_back(to_string(count));
                }
            }
            else
            {
                out.push_back(to_string(current_char));
                out.push_back(to_string(count));

                current_char = c;
                count = 1;
            }
        }

        print_vector(out);
        // cout << out << endl;
        return out.size();
    }

    void print_vector(vector<string> in){
        for (string s : in){
            cout << s << " ";
        }
        cout << endl;
    }
};