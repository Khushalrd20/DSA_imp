//remove spaces and add @40
#include<iostream>
using namespace std;
string  replaceSpace(string s){
    string temp ="";
    for(int i=0;i<s.length();i++){
        if(s[i] == ' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else{
            temp.push_back(s[i]);
        }
          
    }
  
    return temp;
}

int main()
{   string s;
    cout<<"your string is : ";
    cin>>s;
    cout<<s;
    replaceSpace(s);
    
    
    return 0;
}