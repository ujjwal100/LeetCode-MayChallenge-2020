/**
 * Time Complexity : O(N)
 * Space Complexity : O(1)
 *
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        ListNode *h, *p1, *p2;
        if(!head)
            return head;
        p1=head;
        h=p2=head->next;
        while(p2 && p2->next){            
            p1->next = p2->next;                    
            p2->next=p2->next->next;
            p1=p1->next;
            p2=p2->next;
        }
        p1->next=h;
        return head;
        
    }
};
