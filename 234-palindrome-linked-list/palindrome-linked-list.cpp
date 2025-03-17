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
  ListNode* reverseList(ListNode* head) {
     ListNode* prev=NULL;
     ListNode* temp=head;
     while(temp!=NULL){
        ListNode* front=temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;
     }
     return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return true;
        }
     ListNode* slow =head;
        ListNode*  fast=head;
        ListNode*  prev=NULL;
        while(fast!=NULL && fast->next!=NULL ){
           
          prev=slow;
            slow=slow->next;
                  fast=fast->next->next;
           
        }
      ListNode* tail=  reverseList(slow);
        prev->next=NULL;
        while(tail!=NULL && head!=NULL){
            if(tail->val!=head->val){
                return false;
            }
            tail=tail->next;
            head=head->next;
        }
        return true;
    }
};