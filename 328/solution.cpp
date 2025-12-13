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
    ListNode *oddEvenList(ListNode *head)
    {
        if (!head)
            return nullptr;
        else if (!head->next)
            return head;

        ListNode *odd_head = head;
        ListNode *even_head = head->next;
        ListNode *connection_head = head->next;

        while (even_head && even_head->next)
        {
            odd_head->next = even_head->next;
            even_head->next = even_head->next->next;

            odd_head = odd_head->next;
            even_head = even_head->next;
        }
        odd_head->next = connection_head;

        return head;
    }
};