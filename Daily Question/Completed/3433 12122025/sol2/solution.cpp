#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include "tools.cpp"
using namespace std;

// class here
class Solution
{
public:
    vector<int> countMentions(int numberOfUsers, vector<vector<string>> &events)
    {
        vector<int> out(numberOfUsers, 0);
        unordered_map<int, int> userState; // userState[id] = timeframe
        int all_count = 0;

        // print_vector_of_vector_of_string(events);
        sort(events.begin(), events.end(), [](vector<string> a, vector<string> b)
             { 
                if(a[1]!=b[1])
                    return stoi(b[1])>stoi(a[1]);
                else
                    return a[0] > b[0]; });

        // print_vector_of_vector_of_string(events);

        for (const vector<string> &v : events)
        {
            if (v[0] == "MESSAGE")
            {
                if (v[2] == "ALL")
                {
                    all_count++;
                }
                else if (v[2] == "HERE")
                {
                    all_count++;
                    // cout << "ALL_COUNT: " << all_count << endl;
                    int current_timespan = stoi(v[1]);
                    for (unordered_map<int, int>::iterator it = userState.begin(); it != userState.end(); it++)
                    {
                        if (current_timespan - 60 < it->second) // when offline
                        {
                            // cout << "EXCLUDE: " << it->first << endl;
                            out[it->first]--;
                        }
                    }
                    // print_vector(out);
                }
                else
                {
                    for (int _user_id : ExtractStringId(v[2]))
                        out[_user_id]++;
                }
            }
            else // v[0] == "OFFLINE"
            {
                // cout << "OFFLINE: " << stoi(v[2]) << endl;
                userState[stoi(v[2])] = stoi(v[1]); // the first timeframe become offline
            }
        }

        // add count based on all_count to all user
        for (int i = 0; i < numberOfUsers; i++)
            out[i] += all_count;

        return out;
    }

    vector<int> ExtractStringId(const string &input)
    {
        vector<int> out;
        int ptr = 0;
        int i = 0;
        for (; i < input.size(); i++)
        {
            if (isdigit(input.at(i)))
            {
                ptr = i;
                for (; i < input.size(); i++)
                {
                    if (input.at(i) == ' ' || i == input.size() - 1)
                    {
                        out.push_back(stoi(input.substr(ptr, i - ptr + 1)));
                        break;
                    }
                }
            }
        }
        return out;
    }
};