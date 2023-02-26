#include<iostream>
#include<vector>   // o(nlog(log n))
using namespace std;    // optimized solution
int primeCount(int n){
    int cnt =0 ;
    vector<bool>prime(n+1,true);
    prime[0] = prime[1] = false ;
    for(int  i= 2 ;i<n ;i++){
        if(prime[i]){
            cnt++;
        }
        for(int j =2 * i;j<n ;j = j+ i){
            prime[j] = 0;
        }
    }
    return cnt;
}
int main()
{    int n =5000000 ;
    cout<<primeCount(n);
    return 0;
}