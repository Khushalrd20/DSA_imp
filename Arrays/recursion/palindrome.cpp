#include<iostream>
using namespace std;
bool palindrome(string &str ,int s,int e){
    //base case  // for 1 pointer approach use j = n - i-1;
    if(s>e){
        return  true;
    }
    if(str[s]!=str[e]){
        return false;
    }
    
    else{
       
        return palindrome(str,s+1,e-1);
    }
}
int main()
{   string name = "cooc";
    bool isPalin = palindrome(name,0,name.length()-1);
    if(isPalin){
        cout<<"palindrome"<<endl;

    }
    else{
        cout<<"not"<<endl;
    }
    return 0;
}