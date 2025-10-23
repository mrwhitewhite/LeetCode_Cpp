#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include "tools.cpp"
using namespace std;

// class here
class Solution
{
public:
    vector<int> asteroidCollision(vector<int> &asteroids)
    {
        stack<int> out;
        out.push(0);

        for (int i : asteroids)
        {
            if (!(i > 0 or out.top() <= 0))
            {
                while (out.top() > 0)
                {
                    if (abs(i) > out.top())
                    {
                        out.pop();
                    }
                    else if (abs(i) == out.top())
                    {
                        break;
                    }
                    else
                        break;
                }
            }

            if (abs(i) == out.top() && i < 0)
            {
                out.pop();
                continue;
            }

            if (i > 0 or out.top() <= 0)
                out.push(i);
        }

        return stackToVec(out);
    }

    // stack to vec
    vector<int> stackToVec(stack<int> &s)
    {
        vector<int> out;
        while (s.top() != 0)
        {
            out.push_back(s.top());
            s.pop();
        }
        reverse(out.begin(), out.end());
        return out;
    }
};