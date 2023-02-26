#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row=1;
    char ch='A';
    while(row<=n){
        int col=1;
        
        while(col<=row)
        {
        
        cout<<ch;//
        ch++;
        
        col=col+1;
        }
    
    cout<<endl;
    row=row+1;
    }
}
// 4
// A
// BC
// DEF
// GHIJ