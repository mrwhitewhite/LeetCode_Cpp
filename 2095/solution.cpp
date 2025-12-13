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

        while (head_tmp != nullptr)
        {
            head_tmp = head_tmp->next;
            n++;
        }
        n = n / 2;
        head_tmp = head;

        cout << n << endl;

        while (n != 0 && --n > 0)
            head_tmp = head_tmp->next;

        cout << n << endl;

        if (head_tmp->next != nullptr)
            head_tmp->next = head_tmp->next->next;
        else
            return nullptr;

        return head;
    }
};