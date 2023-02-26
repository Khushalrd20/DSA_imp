#include<iostream>
using namespace std; //not solved

int main(){
    int n;
    cin>>n;
    int i=1;
    int count=1;
    while(i<=n){
        int j=1;
        //i=row j=col
        while(j<=i)
        {
        cout<<i-j+1;//
        
        j++;
        }
    
    cout<<endl;
    i=i+1;
    }
}
// 4
// 1
// 23
// 345
// 4567