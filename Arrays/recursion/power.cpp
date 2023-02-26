#include<iostream>
using namespace std;
int power(int a ,int b){
    //base
    //for even power i.e 2^2 == a^b/2 * a^b/2
    //odd == a * a^b/2 * a^b/2
    if(b == 0){
        return 1;
    }
    if(b == 1){
        return a;
    }
    //if power is neg then 
    //   if (n < 0) { 
    //         n = abs(n);
    //         x = 1/x;
    //     }
    int ans = power(a,b/2);
    if(b&1){
        return a * ans *ans; 
    }
    else{
        return ans*ans;
    }
}
int main()
{   int a  = 2 , b = 10;
    cout<<power(a,b);
    
    return 0;
}