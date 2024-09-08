/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int n  = 0;
        ListNode * temp = head;

        while(temp!=NULL)
        {
            temp = temp->next;
            n++;
        }

        int size = n/k;
        int extra = n%k;

        vector<ListNode*>ans(k);

        ListNode *prev = NULL;
        ListNode* curr = head;

         for (int i = 0; i < k && curr != NULL; i++) {
            ans[i] = curr;
            int currentPartSize = size + (extra > 0 ? 1 : 0); 
            extra--;

            for (int j = 0; j < currentPartSize; j++) {
                prev = curr;
                curr = curr->next;
            }

            if (prev != NULL) {
                prev->next = NULL; 
            }
        }

        return ans;
        
    }
};