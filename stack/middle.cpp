#include<iostream>
using namespace std;
#include <bits/stdc++.h> 
void solve(stack<int>&inputStack,int cnt , int size){
    //base case 
    if(cnt == size /2){
        inputStack.pop() ;
        return ;
    }
    
    int ans = inputStack.top() ;
    inputStack.pop();
    
    //recursve call
    solve(inputStack,cnt + 1 , size);
    inputStack.push(ans);
}
void deleteMiddle(stack<int>&inputStack, int N){
	
   // Write your code here
    int cnt = 0 ;
    solve(inputStack,cnt , N);
   
}
int main()
{
    return 0;
}