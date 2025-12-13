#include <iostream>
#include <vector>
#include "tools.cpp"
using namespace std;

// Definition for singly-linked list
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
    ListNode *deleteMiddle(ListNode *head)
    {
        ListNode *head_tmp = head;
        int n = 0;

        // count N
        while (head_tmp != nullptr)
        {
            head_tmp = head_tmp->next;
            n++;
        }

        // return nullptr if only 1 element in linkedlist
        if (n == 1)
            return nullptr;

        // get mid idx
        n = n / 2;

        // find mid idx and remove it
        head_tmp = head;
        while (n != 0 && --n > 0)
            head_tmp = head_tmp->next;
        head_tmp->next = head_tmp->next->next;

        return head;
    }
};