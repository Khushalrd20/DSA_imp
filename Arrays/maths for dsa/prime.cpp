#include<iostream>
using namespace std;
bool isPrime(int n){
    for(int i=2;i<n;i++)
    {
        if(n%i == 0){
            return false;
        }
    }
    return true;
}
int  Prime(int n){
    int cnt =0;
    if(n<=1){
        return false;
    }
    for(int i= 2;i<n;i++){
        if(isPrime(i)){
            cnt++;
        }
    }
    return cnt;
}
int main()
{   
    int n =10 ;
    cout<<Prime(n);
    return 0;
}