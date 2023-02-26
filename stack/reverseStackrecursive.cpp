#include <bits/stdc++.h> 
using namespace std ;
void insertAtBottom(int data,stack<int>&stack){
    if(stack.empty()){
        stack.push(data);
        return ;
    }
    int num = stack.top();
    stack.pop();
    
    //recursive call
    insertAtBottom(data , stack);
    
    stack.push(num);
    
}
void reverseStack(stack<int> &stack) {
    // Write your code here
    //base case 
    if(stack.empty()){
        return ;
    }
    
    int num = stack.top();
    stack.pop();
    
    //recursive call]
    reverseStack(stack);
    
    insertAtBottom(num,stack);
}