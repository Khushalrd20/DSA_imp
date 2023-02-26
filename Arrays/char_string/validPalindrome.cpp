#include<iostream>
using namespace std;
char  lowerCase(char  ch){
    if((ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
        return ch;
    }
    else{
        char temp = ch -'A'+'a';
        return temp;
    }

}
bool valid(char ch){
    if((ch>='a' && ch<='z')  || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
        return 1;
    }
    return 0;

}
bool palindrome(string a){
    int s=0;
    int e=a.length()-1;
    while(s<=e){
        if(a[s]!=a[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

bool ispanlindrome(string s){
    string temp="";
    for(int i=0;i<s.length();i++){
        if(valid(s[i])){
            temp.push_back(s[i]);
        }
    }
    //lowercase converT
    for(int i=0;i<temp.length();i++){
        temp[i] = lowerCase(temp[i]);
    }
    return palindrome(temp);
}
int main()
{   string s;
    cout<<"your string is : ";
    cin>>s;

    bool ans = ispanlindrome(s);
    cout<<ans;
    return 0;
}
//your string is : "A man, a plan, a canal: Panama"
//1