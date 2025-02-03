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
    ListNode* reverseList(ListNode* head) 
    {
    ListNode* prev= NULL;  
     ListNode* current= head;  
      ListNode* next= NULL; 
      while(current!=NULL)
      {
        next=current->next; //next=2,  next=3
        current->next=prev; // 2=nul;  3=head/1
        prev=current;// prev=head/1;  prev=2
        current=next; //current=2  
      } 
      head=prev;
      return head;
    }
};
