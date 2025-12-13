#include "solution.cpp"

int main()
{
    Solution test_sol;

    // Eg 1: [1,3,4,7,1,2,6] ; n=7
    ListNode *node_eg1_7 = new ListNode(6);
    ListNode *node_eg1_6 = new ListNode(2, node_eg1_7);
    ListNode *node_eg1_5 = new ListNode(1, node_eg1_6);
    ListNode *node_eg1_4 = new ListNode(7, node_eg1_5);
    ListNode *node_eg1_3 = new ListNode(4, node_eg1_4);
    ListNode *node_eg1_2 = new ListNode(3, node_eg1_3);
    ListNode *node_eg1_head = new ListNode(1, node_eg1_2);

    // Eg 2: [1,2,3,4] ; n=4
    ListNode *node_eg2_4 = new ListNode(4);
    ListNode *node_eg2_3 = new ListNode(3, node_eg2_4);
    ListNode *node_eg2_2 = new ListNode(2, node_eg2_3);
    ListNode *node_eg2_head = new ListNode(1, node_eg2_2);

    // Eg 3: [2,1] ; n=2
    ListNode *node_eg3_2 = new ListNode(1);
    ListNode *node_eg3_head = new ListNode(2, node_eg3_2);

    // Eg 4 [1] ; n=1
    ListNode *node_eg4_head = new ListNode(1);

    // Print linked list
    printLinkedList(test_sol.deleteMiddle(node_eg1_head)); // 1,3,4,1,2,6
    printLinkedList(test_sol.deleteMiddle(node_eg2_head)); // 1,2,4
    printLinkedList(test_sol.deleteMiddle(node_eg3_head)); // 2
    printLinkedList(test_sol.deleteMiddle(node_eg4_head)); // []

    return 0;
}