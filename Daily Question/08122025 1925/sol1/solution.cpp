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

        for (int a = 3; a <= 250; a++)
        {
            if (a * a > N)
                continue;
            for (int b = 1; b <= 250; b++)
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