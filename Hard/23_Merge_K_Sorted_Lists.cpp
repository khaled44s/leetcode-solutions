class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        auto cmp = [](ListNode* l, ListNode* r) {
            return l->val > r->val;
        };
        priority_queue<ListNode*, vector<ListNode*>, decltype(cmp)>pq(cmp);
        for (auto headNode: lists) {
            if (headNode != nullptr) {
                pq.push(headNode);
            }
        }

        ListNode* dummyNode = new ListNode(0);
        ListNode* currNode = dummyNode;
        while (!pq.empty()) {
            currNode->next = pq.top();
            pq.pop();
            currNode = currNode->next;
            if (currNode->next) {
                pq.push(currNode->next);
            }
        }

        return dummyNode->next;
    }
};
