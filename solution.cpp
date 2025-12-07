#include <vector>
#include <iostream>
#include <vector>
#include "tools.cpp"
using namespace std;

// class here
class Solution
{
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n)
    {
        // return true directly if n==0
        if (n == 0)
        {
            return true;
        }

        int len = flowerbed.size();

        // insert 0 in front and end of flowerbed
        flowerbed.push_back(0);
        flowerbed.insert(flowerbed.begin(), 0);

        // verify
        for (int i = 1; i <= len; i++)
        {
            if (
                flowerbed.at(i - 1) == 0 and
                flowerbed.at(i) == 0 and
                flowerbed.at(i + 1) == 0)
            {
                if (plantFlower(flowerbed, n, i))
                {
                    return true;
                }
            }
        }

        // remaining flower -> return fasle
        return false;
    };

    bool plantFlower(vector<int> &flowerbed, int &n, int i)
    {
        // return true if no more flower to be planted after that
        flowerbed.at(i) = 1;

        // check remaining flower
        if (n == 1)
        {
            return true;
        }
        else
        {
            n--;
            i++;
            return false;
        }
    }
};