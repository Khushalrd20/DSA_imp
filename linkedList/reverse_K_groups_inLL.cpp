#include<bits/stdc++.h>
 // Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
private :
    int getLength(ListNode* head){
        int cnt = 0 ;
        while(head != NULL){
            cnt ++;
            head = head ->next;
        }
        return cnt;
    }
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        //base case
        int n = getLength(head);
        if(head == NULL || n < k){  // if we cant take length and compare with k then it reverses other two element s in  2nd case
            return head;
        }
        //step 1 : reverse 2 nodes
        ListNode* prev = NULL;
        ListNode* curr =head;
        ListNode*forward = NULL;
        int count = 0 ;
        
        while(curr != NULL && count < k ){
            forward  = curr -> next ;
            curr->next = prev; //setting NUll
            prev = curr;   //updating  prev
            curr= forward; // updating curr to forward 
            count++; // for no of groups reversed
        }
        //step 2 : recursive calll for remaining part
        if(forward != NULL  ){
            head->next = reverseKGroup(forward,k);
        }
        
        //returning head which is prev
        return prev;
    }
};