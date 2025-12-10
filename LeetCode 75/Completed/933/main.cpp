#include "solution.cpp"

int main()
{
    RecentCounter *recentCounter = new RecentCounter();
    cout << recentCounter->ping(1) << endl;    // Out: 1
    cout << recentCounter->ping(100) << endl;  // Out: 2
    cout << recentCounter->ping(3001) << endl; // Out: 3
    cout << recentCounter->ping(3002) << endl; // Out: 3
    return 0;
}