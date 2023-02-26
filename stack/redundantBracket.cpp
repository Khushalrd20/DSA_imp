#include <bits/stdc++.h> 
using namespace std ;
//redundant brackets means useless 
//if consisits then true o(n2)
bool findRedundantBrackets(string &s)
{
    // 
    stack<char>st ;
    for(int i = 0 ;i<s.length();i++){
        char ch  = s[i];
        
        //open braces and operator 
        if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/'){
            st.push(ch);
        }
        else{
            //for close braces 
            if(ch == ')'){
                bool isredundant = true ;
                
                while(st.top() != '('){
                    char top = st.top();
                    if(top == '+' ||top == '-' || top == '*' || top == '/'){
                        isredundant = false ;
                    }
                    st.pop();
                }
                if(isredundant == true){
                    return true ;
                }
                st.pop();
            }
        }
    }
    return false ;

}
