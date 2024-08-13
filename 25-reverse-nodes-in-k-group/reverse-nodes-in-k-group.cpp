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

    ListNode * kReverse(ListNode* head, int k,int n) {
        if(n<k || head == NULL)
        return head;


         if(head==NULL)
    {
        return head;
    }

     ListNode * prev = NULL;
     ListNode * curr = head;
     ListNode * next = NULL;

     int i = 0;

     while(i<k && curr!=NULL)
     {
         next = curr->next;
         curr->next = prev;
         prev = curr;
         curr = next;
         i++;
     }

     if(next!=NULL)
     {
        head->next = kReverse(next,k,n-k);
     }

    return prev;

    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        int size = 0;

    ListNode * temp = head;

    while(temp!=NULL)
    {
        temp= temp->next;
        size++;
    }
    
    return kReverse(head,k,size);
    }
};