#include <iostream>
#include <deque>
#include "tools.cpp"
using namespace std;

// class here
class RecentCounter
{
public:
    deque<int> p;

    RecentCounter()
    {
    }

    int ping(int t)
    {
        p.push_front(t);

        while (t - 3000 > p.back())
            p.pop_back();
        return p.size();
    }
};