#include <vector>
#include <algorithm>
#include <iostream>
#include <vector>
#include "tools.cpp"
using namespace std;

// class here
class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        vector<bool> out;
        vector<int>::iterator candies_iterator;

        for (candies_iterator = candies.begin(); candies_iterator != candies.end(); ++candies_iterator)
        {
            // add
            *candies_iterator += extraCandies;

            // verify
            if (*max_element(candies.begin(), candies.end()) == *candies_iterator)
            {
                out.push_back(true);
            }
            else
            {
                out.push_back(false);
            };

            // substract
            *candies_iterator -= extraCandies;
        };
        return out;
    };
};