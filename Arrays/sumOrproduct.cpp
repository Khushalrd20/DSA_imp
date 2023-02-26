#include<iostream>
using namespace std;
int sumProduct(int n ,int q){
    if(q==1){
        return (n*(n+1)/2);   //if q=1 the sum and not then product
    }
    int ans = 1;  
    for(int i =1 ;i <=n;i++){     // if started with 0 then value is 0
        ans *=i;
        ans%= 1000000000 + 7;
    }
    return ans;
}
int main()
{   int n,q;
    cin>>n>>q;
    int ans = sumProduct(n,q);
    cout<<ans;
    return 0;
}