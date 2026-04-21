/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public int val;
 *     public ListNode next;
 *     public ListNode(int val=0, ListNode next=null) {
 *         this.val = val;
 *         this.next = next;
 *     }
 * }
 */
 
public class Solution {
    public ListNode ReverseList(ListNode head) {
        if(head == null || head.next == null){
            return head;
        }

        ListNode left = head;
        ListNode mid = head.next;
        ListNode right = mid.next;  
        if(right == null){
            mid.next = left;
            left.next = null;
            return mid;
        }
        left.next = null;     
        while(right.next != null){
            mid.next = left;
            left = mid;
            mid = right;
            right = right.next;
        }
        mid.next = left;
        right.next = mid;
        return right;
    }
}
