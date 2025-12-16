#include "solution.cpp"

int main()
{
    Solution test_sol;

    // Eg 1: [5,4,2,1]
    ListNode *node_eg1_4 = new ListNode(1);
    ListNode *node_eg1_3 = new ListNode(2, node_eg1_4);
    ListNode *node_eg1_2 = new ListNode(4, node_eg1_3);
    ListNode *node_eg1_head = new ListNode(5, node_eg1_2);

    // Eg 2: [4,2,2,3]
    ListNode *node_eg2_4 = new ListNode(3);
    ListNode *node_eg2_3 = new ListNode(2, node_eg2_4);
    ListNode *node_eg2_2 = new ListNode(2, node_eg2_3);
    ListNode *node_eg2_head = new ListNode(4, node_eg2_2);

    // Eg 3: [1,100000]
    ListNode *node_eg3_2 = new ListNode(100000);
    ListNode *node_eg3_head = new ListNode(1, node_eg3_2);

    // Print linked list
    // printLinkedList(node_eg1_head);
    // printLinkedList(node_eg2_head);
    // printLinkedList(node_eg3_head);

    // print output
    cout << test_sol.pairSum(node_eg1_head) << endl; // Out: 6
    cout << test_sol.pairSum(node_eg2_head) << endl; // Out: 7
    cout << test_sol.pairSum(node_eg3_head) << endl; // Out: 100001

    return 0;
}