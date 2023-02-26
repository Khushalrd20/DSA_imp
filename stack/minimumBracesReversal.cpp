#include <bits/stdc++.h> 
using namespace std ;   
//https://www.codingninjas.com/codestudio/problems/minimum-cost-to-make-string-valid_1115770?leftPanelTab=0
int findMinimumCost(string str) {
  // Write your code here
    //odd case 
    if(str.length()&1){
        return  -1 ;
    }
    stack<char>s ;
    for(int i = 0 ;i< str.length();i++){
        char ch = str[i];
        
        //open braces
        if(ch == '{'){
            s.push(ch);
        }
        else{ //close
            if(!s.empty() && s.top() == '{'){
                s.pop();
            }
            else{
                s.push(ch);
            }
        }
    }
    
    //stack contain invalid expres
    int a = 0 ,b = 0;
    while(!s.empty()){
        if(s.top() == '{'){
            a++;
        }
        else{
            b++ ;
        }
        s.pop();
    }
    int ans = (a +1)/2 + (b + 1 )/2;
    return ans;
    
}