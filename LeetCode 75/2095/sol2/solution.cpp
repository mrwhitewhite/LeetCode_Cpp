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
        if (!head || !head->next)
            return nullptr;

        ListNode *fast_head = head;
        ListNode *slow_head = head;
        ListNode *prev_slow_head = head;

        while (fast_head && fast_head->next)
        {
            fast_head = fast_head->next->next;
            prev_slow_head = slow_head;
            slow_head = slow_head->next;
        }

        prev_slow_head->next = slow_head->next;
        return head;
    }
};