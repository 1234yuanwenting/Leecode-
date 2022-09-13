# Leecode-
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
ListNode*p=head;
ListNode* pre=new ListNode(-1,NULL);
while(p!=NULL)
{ListNode*q=p;
p=p->next;
q->next=NULL;
q->next=pre->next;
pre->next=q;
}
return pre->next;
    }
};

