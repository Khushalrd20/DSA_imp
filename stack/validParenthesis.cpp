#include<iostream>
#include<stack>
// https://www.codingninjas.com/codestudio/problems/valid-parenthesis_795104?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0

using namespace std;
bool isValidParenthesis(string expression)
{
    // Write your code here.
    stack<char>st ;
    for(int i = 0 ;i<expression.length();i++){
        char ch = expression[i];
        
        //if opening braces  push 
        //if closing  then compare with top and pop
        
        if(ch == '{' || ch == '(' || ch == '['){
            st.push(ch);
        }
        else{
            //for closing braces 
            if(!st.empty()){
                char top = st.top();
                if((ch == ']' && top == '[')|| 
                   (ch == '}' && top == '{') ||
                   (ch == ')' && top == '(')){
                    st.pop();
                }
                else{
                    return false ;
                }
            }
            else{
                return false ;
            }
        }
    }
    if(!st.empty()){
        return false ;
    }
    return true;
}
int main()
{
    return 0;
}