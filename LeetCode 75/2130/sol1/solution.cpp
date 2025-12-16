#include <iostream>
#include <vector>
#include "tools.cpp"
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    int pairSum(ListNode *head)
    {
        vector<int> num;
        int n;
        int out = 0;

        while (head)
        {
            num.push_back(head->val);
            head = head->next;
        }
        n = num.size();
        // print_vector(num);
        for (int i = 0; i < n; i++)
            out = max(out, num[i] + num[n - 1 - i]);

        return out;
    }
};