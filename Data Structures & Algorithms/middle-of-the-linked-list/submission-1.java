/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    ListNode ptr; 
    int L_ln = 0;
    public ListNode middleNode(ListNode head) {
        ptr = head;
        while (ptr != null)
        {
            L_ln++;
            ptr = ptr.next;
        }
        ptr = head;
        L_ln /= 2;
        while(L_ln > 0)
        {
            ptr = ptr.next;
            L_ln--;
        }
        return ptr;
    }
}