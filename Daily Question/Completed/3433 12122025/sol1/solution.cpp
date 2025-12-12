#include <iostream>
#include <vector>
#include "tools.cpp"
using namespace std;

// class here
class Solution
{
public:
    vector<int> countMentions(int numberOfUsers, vector<vector<string>> &events)
    {
        vector<int> out(numberOfUsers, 0);
        vector<vector<int>> userState(numberOfUsers, vector<int>(100061, 1)); // userState[Id][timespan]

        // =============== set offline state ===============
        for (vector<string> &v : events)
        {
            if (v[0].at(0) == 'O')
            {
                // timespan = stoi(v[1])
                // id = stoi(v[2])
                fill(userState[stoi(v[2])].begin() + stoi(v[1]), userState[stoi(v[2])].begin() + 60 + stoi(v[1]), false);
            }
        }

        // =============== count ===============
        for (vector<string> &v : events)
        {
            if (v[0].at(0) == 'O')
                continue;

            // count ALL
            if (v[2] == "ALL")
            {
                for (int i = 0; i < numberOfUsers; i++)
                    out[i]++;
                continue;
            }
            // count HERE
            if (v[2] == "HERE")
            {
                int timespan = stoi(v[1]);
                for (int i = 0; i < numberOfUsers; i++)
                {
                    if (userState[i][timespan])
                        out[i]++;
                }
                continue;
            }

            // count specific
            for (int i : ExtractStringId(v[2]))
                out[i]++;
        }

        return out;
    }

    vector<int> ExtractStringId(const string &input)
    {
        vector<int> out;
        string now = "";
        for (char c : input + ' ')
        {
            if (c == 'i' || c == 'd')
                continue;
            else if (c == ' ')
            {
                out.push_back(stoi(now));
                now = "";
                continue;
            }
            now += c;
        }
        return out;
    }
};