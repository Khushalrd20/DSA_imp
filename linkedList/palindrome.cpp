#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 //* Definition for singly-linked list.
 
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
    
private :
    int length(ListNode* head){
        int len = 0 ;
        while(head != NULL){
            head = head ->next;
            len++;
        }
        return len;
    }
    bool checkPalin(vector<int>arr){
        int n = arr.size();
        int s = 0 ;
        int e = n-1;
        while(s<=e){
            if(arr[s] != arr[e]){
                return 0 ;

            }
            else{
                s++;
                e--;
            }
        }
        return true;
    }
public:
     bool palindrome(ListNode* head) {
        
        //strp 1 
        vector<int>arr;
        ListNode *temp = head ;
        while(temp!= NULL){
            arr.push_back(temp->val);
            temp = temp->next ; 
        }
        return checkPalin(arr);

       
    }
};

int main()
{
    return 0;
}