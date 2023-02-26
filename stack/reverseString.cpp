#include<iostream>
#include<stack>

using namespace std;

int main()
{   stack<char>st ;
    string s = "khushal" ;
    for(int i = 0  ;i< s.length();i++){
        char ch  = s[i] ;
        st.push(ch);
    }
    string ans ="";
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    cout<< ans ;
    return 0;
}