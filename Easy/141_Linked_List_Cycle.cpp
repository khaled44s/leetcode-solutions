//TC: O(n)
//SC: O(1)
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* fastPointer = head;
        ListNode* slowPointer = head;

        while( fastPointer != NULL && fastPointer->next != NULL) {
            fastPointer = fastPointer->next->next;
            slowPointer = slowPointer->next;
            if (fastPointer == NULL) {
                return false;
            }
            if (fastPointer == slowPointer) {
                return true;
            }
        }

        return false;
    }
};
