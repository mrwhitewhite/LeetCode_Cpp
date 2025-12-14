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
    ListNode *reverseList(ListNode *head)
    {
        if (!head || !head->next) // empty list / 1 element
            return head;

        ListNode *ptr = head->next->next;
        ListNode *left = head;
        ListNode *right = head->next;

        // reverse
        left->next = nullptr; // init
        while (ptr)
        {
            right->next = left; // mid-part reverse

            // prepare for next mid-part reverse
            left = right;
            right = ptr;
            ptr = ptr->next;
        }
        right->next = left; // ending reverse

        return right;
    }
};