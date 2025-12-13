#include <iostream>
#include <vector>
#include <algorithm>
#include "tools.cpp"
using namespace std;

// class here
class Solution
{
public:
    vector<string> validateCoupons(
        vector<string> &code,
        vector<string> &businessLine,
        vector<bool> &isActive)
    {
        const int n = code.size();
        vector<vector<string>> res;
        vector<string> out;

        for (int i = 0; i < n; i++)
        {
            if (isActive[i] &&
                (businessLine[i] == "electronics" ||
                 businessLine[i] == "grocery" ||
                 businessLine[i] == "pharmacy" ||
                 businessLine[i] == "restaurant"))
            {
                for (int j = 0; j < code[i].size(); j++)
                {
                    char &c = code[i][j];
                    if (!(isdigit(c) || isalpha(c) || c == '_'))
                        break;
                    else if (j + 1 == code[i].size())
                        res.push_back({code[i], businessLine[i]});
                }
            }
        }

        sort(res.begin(), res.end(), [](const vector<string> &a, const vector<string> &b)
             {
            if (a[1] != b[1])
                return a[1] < b[1];
            else
                return a[0] < b[0]; });

        transform(
            res.begin(),
            res.end(),
            back_inserter(out),
            [](const vector<string> &a)
            {
                return a[0];
            });

        return out;
    }
};