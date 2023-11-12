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

    ListNode * reverse( ListNode * prev ,  ListNode * curr)
    {
        if(curr == NULL)
        return prev;

         ListNode * right = curr->next;
         curr->next = prev;
        return  reverse(curr,right);

    }
    ListNode* reverseList(ListNode* head) {
        
        ListNode * temp = reverse(NULL , head);

        return temp;
    }
};