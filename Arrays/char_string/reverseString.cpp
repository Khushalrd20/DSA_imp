#include<iostream>
using namespace std;
void reverse(char a[],int n){
    int st=0;
    int e=n-1;
    while(st<e){
        swap(a[st++],a[e--]);
    }
}
void print(char a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
}
int main()
{   char s[7]={'k','h','u','s','h','a','l'};
    
   
    reverse(s,7);
    print(s,7);
    return 0;
}