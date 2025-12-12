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
        vector<vector<int>> userState(numberOfUsers, vector<int>(100001, 1)); // userState[userId][timespan] => user online state in 0/1 ; 1<=t<=100000

        return out;
    }

    bool isOfflineEvent(vector<string> input)
    {
        return input[0].at(0) == 'O';
    }

    vector<int> ExtractStringId(string input)
    {
        vector<int> out;
        string now = "";
        input += ' ';
        for (char c : input)
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