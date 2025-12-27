#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include "tools.cpp"
using namespace std;

class Solution
{
public:
    int mostBooked(int n, vector<vector<int>> &meetings)
    {
        sort(meetings.begin(), meetings.end(), [](const vector<int> &a, const vector<int> &b)
             { return a[0] < b[0]; });
        vector<long long> room(n, 0); // contain end time of each room
        vector<int> count(n, 0);      // contain end time of each room
        int out_ref;
        int out = 0;

        for (int m = 0; m < meetings.size(); m++)
        {
            vector<int> meeting_now = meetings[m];
            long long offset = max(*min_element(room.begin(), room.end()) - meeting_now[0], static_cast<long long>(0));
            long long start = meeting_now[0] + offset;
            long long end = meeting_now[1] + offset;

            for (int r = 0; r < n; r++)
            {
                if (room[r] <= start)
                {
                    room[r] = end;
                    count[r]++;
                    break;
                }
            }
        }

        out_ref = *max_element(count.begin(), count.end());
        while (count[out] != out_ref)
            out++;

        return out;
    }
};