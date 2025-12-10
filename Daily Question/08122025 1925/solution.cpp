#include <iostream>
#include <vector>
#include "tools.cpp"
using namespace std;

// class here
class Solution
{
public:
    int countTriples(int n)
    {
        int max = 250;
        int max_sq = max * max;
        std::vector<int> perfect_sq(max_sq + 1, 0);
        int N = n * n;
        int out = 0;
        int c;

        for (int i = 1; i <= max && i * i <= max_sq; i++)
            perfect_sq[i * i]++;

        for (int a = 3; a <= max; a++)
        {
            for (int b = 1; b <= max; b++)
            {
                c = a * a + b * b;

                if (c > N)
                    break;
                else if (perfect_sq[c] > 0)
                    out++;
            }
        }

        return out;
    }
};