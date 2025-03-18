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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        map<ListNode *,int>um;
        ListNode * temp=headA;
        while(temp!=NULL){
um[temp]=1;
temp=temp->next;
        }
        temp=headB;
        while(temp!=NULL){
            if(um.find(temp)!=um.end()){
                return temp;
            }
            temp=temp->next;
        }
        return NULL;
    }
};