#include "solution.cpp"

int main()
{
    Solution test_sol;

    string senate1 = "RD";
    string senate2 = "RDD";
    string senate3 = "DDRRR";
    string senate4 = "RRR";

    cout << test_sol.predictPartyVictory(senate1) << endl; // "Radiant"
    cout << test_sol.predictPartyVictory(senate2) << endl; // "Dire"
    cout << test_sol.predictPartyVictory(senate3) << endl; // "Dire"
    cout << test_sol.predictPartyVictory(senate4) << endl; // "Radiant"

    return 0;
}