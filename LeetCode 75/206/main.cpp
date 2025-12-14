#include "solution.cpp"

int main()
{
    Solution test_sol;

    // Eg 1: [1,2,3,4,5]
    ListNode *node_eg1_5 = new ListNode(5);
    ListNode *node_eg1_4 = new ListNode(4, node_eg1_5);
    ListNode *node_eg1_3 = new ListNode(3, node_eg1_4);
    ListNode *node_eg1_2 = new ListNode(2, node_eg1_3);
    ListNode *node_eg1_head = new ListNode(1, node_eg1_2);

    // Eg 2: [1,2]
    ListNode *node_eg2_2 = new ListNode(2);
    ListNode *node_eg2_head = new ListNode(1, node_eg2_2);

    // Print linked list
    printLinkedList(test_sol.reverseList(node_eg1_head)); // [5,4,3,2,1]
    printLinkedList(test_sol.reverseList(node_eg2_head)); // [2,1]

    return 0;
}