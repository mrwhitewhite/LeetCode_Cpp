#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include "tools.cpp"
using namespace std;

// class here
class Solution
{
public:
    int numberOfWays(string corridor)
    {
        const int n = corridor.size();
        const int mod = 1000000007;
        int n_seat = 0;
        long long out = 1;
        vector<int> position(n + 1, 0);

        // string to vector of position
        for (int i = 0; i < n; i++)
        {
            if (corridor.at(i) == 'S')
            {
                position.at(i) = 1;
                n_seat++;
            }
        }

        if (n_seat % 2 == 1 || n_seat == 0) // return 0 for odd numbered seat
            return 0;
        else if (n_seat == 2) // return 1 for n_seat = 2
            return 1;

        // partial sum
        partial_sum(position.begin(), position.end(), position.begin());
        // print_vector(position);

        // values count
        vector<int> values_count(n_seat + 1, 0);
        for (int i = 0; i < n; i++)
        {
            if (position.at(i) % 2 == 0 && position.at(i) != 0 && position.at(i) != n_seat)
                values_count.at(position.at(i))++;
        }
        // print_vector(values_count);

        // mult into out
        for (int i : values_count)
        {
            if (i > 0)
                out = (out * i) % mod;
        }

        return out;
    }
};