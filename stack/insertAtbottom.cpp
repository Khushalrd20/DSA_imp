#include <bits/stdc++.h>
#include <bits/stdc++.h> 
using namespace std ;
void solve(stack<int>&myStack, int x){
    //bas ecase 
    if(myStack.empty()){
        myStack.push(x);
        return ;
    }
    int ans = myStack.top();
    myStack.pop();
    
    solve(myStack , x);
    //abcktracking
    myStack.push(ans);
    
}
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
   solve(myStack ,x );
    return myStack;
}
int main(){

}
