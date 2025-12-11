#include <iostream>
#include <vector>
#include "tools.cpp"
using namespace std;

// class here
class Solution
{
public:
    string predictPartyVictory(string senate)
    {
        // find the only 1 party and return it
        for (char c : ban(senate))
        {
            if (c == 'R')
                return "Radiant";
            else if (c == 'D')
                return "Dire";
        }
        return "X";
    }

    string ban(string &senate)
    {
        for (int i = 0; i < senate.size(); i++)
        {
            char c = senate.at(i);
            bool isBanned = false;

            // skip ban if =='X'
            if (c == 'X')
                continue;

            // ban next other party
            for (int j = i + 1; j < senate.size(); j++)
            {
                if (c != senate.at(j) && senate.at(j) != 'X')
                {
                    senate.at(j) = 'X';
                    isBanned = true;
                    break;
                }
            }
            for (int j = 0; j < i && !isBanned; j++) // ban prev other party (if not banned before)
            {
                if (c != senate.at(j) && senate.at(j) != 'X')
                {
                    senate.at(j) = 'X';
                    break;
                }
            }
        } // for loop

        // count r and d
        int r_count = 0;
        int d_count = 0;
        for (char c : senate)
        {
            if (c == 'R')
                r_count++;
            else if (c == 'D')
                d_count++;
        }

        // recursive func
        if (r_count == 0 || d_count == 0)
            return senate;
        else
            return ban(senate);
    }
};