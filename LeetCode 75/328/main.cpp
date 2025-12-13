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

    // Eg 2: [2,1,3,5,6,4,7]
    ListNode *node_eg2_7 = new ListNode(7);
    ListNode *node_eg2_6 = new ListNode(4, node_eg2_7);
    ListNode *node_eg2_5 = new ListNode(6, node_eg2_6);
    ListNode *node_eg2_4 = new ListNode(5, node_eg2_5);
    ListNode *node_eg2_3 = new ListNode(3, node_eg2_4);
    ListNode *node_eg2_2 = new ListNode(1, node_eg2_3);
    ListNode *node_eg2_head = new ListNode(2, node_eg2_2);

    // Eg 3: [1,2,3,4,5,6,7,8]
    ListNode *node_eg3_8 = new ListNode(8);
    ListNode *node_eg3_7 = new ListNode(7, node_eg3_8);
    ListNode *node_eg3_6 = new ListNode(6, node_eg3_7);
    ListNode *node_eg3_5 = new ListNode(5, node_eg3_6);
    ListNode *node_eg3_4 = new ListNode(4, node_eg3_5);
    ListNode *node_eg3_3 = new ListNode(3, node_eg3_4);
    ListNode *node_eg3_2 = new ListNode(2, node_eg3_3);
    ListNode *node_eg3_head = new ListNode(1, node_eg3_2);

    // Print linked list
    printLinkedList(test_sol.oddEvenList(node_eg1_head)); // [1,3,5,2,4]
    printLinkedList(test_sol.oddEvenList(node_eg2_head)); // [2,3,6,7,1,5,4]
    printLinkedList(test_sol.oddEvenList(node_eg3_head)); // [1,3,5,7,2,4,6,8]

    return 0;
}