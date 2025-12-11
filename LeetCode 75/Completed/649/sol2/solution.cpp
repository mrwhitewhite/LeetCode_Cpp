#include <iostream>
#include <queue>
#include "tools.cpp"
using namespace std;

// class here
class Solution
{
public:
    string predictPartyVictory(string senate)
    {
        queue<int> radiant;
        queue<int> dire;

        // queue init
        for (int i = 0; i < senate.size(); i++)
        {
            if (senate.at(i) == 'R')
                radiant.push(i);
            else
                dire.push(i);
        }

        while (!radiant.empty() && !dire.empty())
        {
            if (radiant.front() < dire.front())
                radiant.push(radiant.front() + senate.size());
            else
                dire.push(dire.front() + senate.size());

            radiant.pop();
            dire.pop();
        }

        // output
        if (radiant.empty())
            return "Dire";
        else
            return "Radiant";
    }
};
