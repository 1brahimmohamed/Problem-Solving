/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public boolean hasCycle(ListNode head) {
        ListNode curr = head;
        Set<ListNode> myNodes = new HashSet<>();
        while(curr != null){
            if (myNodes.contains(curr)){
                return true;
            }
            else{
                myNodes.add(curr);
            }
            curr = curr.next;
       } 
       return false;
   }
}
