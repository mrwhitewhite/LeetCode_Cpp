#include <iostream>
#include <vector>
#include <cmath>
#include "tools.cpp"
using namespace std;

// class here
class Solution
{
public:
    int countTriples(int n)
    {
        const int N = n * n;
        int out = 0;
        int c;

        for (int a = 3; a <= n; a++)
        {
            if (a * a > N)
                continue;
            for (int b = 1; b <= n; b++)
            {
                c = a * a + b * b;

                if (c > N)
                    break;
                else if (sqrt(c) == floor(sqrt(c)))
                    out++;
            }
        }

        return out;
    }
};