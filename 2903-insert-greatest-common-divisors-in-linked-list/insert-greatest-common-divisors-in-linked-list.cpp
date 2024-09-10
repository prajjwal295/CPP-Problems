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
    int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    // Base case
    if (a == b)
        return a;

    // a is greater
    if (a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
}
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(!head->next)
        return head;

        ListNode*prev = head;
        ListNode * curr = head->next;

        while(curr!=NULL)
        {
            int val = gcd(prev->val,curr->val);

            ListNode *temp = new ListNode(val);

            prev->next = temp;
            temp->next = curr;

            prev = curr;
            curr = curr->next;
        }

        return head;
    }
};