#include<iostream>
#include<vector>
using namespace std;

bool palin(int x){
    int r;//x is num
    double sum=0;
    int temp=x;
    while(temp>0){
        r=temp%10;
        sum=(sum*10)+r;
        temp=temp/10;
    }
     if(sum==x)
     {
            return true;
     }
     else
     {
            return false;
     }
    
}
bool palindrome(char a[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if(a[s]!=a[e]){
            return false;
        }
        else{
            s++;
            e--;
        }

    }
    return true;
}
int main()
{   
    char a[5];
    cin>>a;
    
    bool y=palindrome(a,5);
    if(y==true){
        cout<<"it is palindrome"<<endl;
    }
    else{
        cout<<"it is not palindrome"<<endl;
    }
    int b=121;
    cout<<"your num is : "<<b<<endl;
   // palin(ab);
     if(palin(b)){
        cout<<"it is palindrome"<<endl;
    }
    else{
        cout<<"it is not palindrome"<<endl;
    }
    return 0;
}