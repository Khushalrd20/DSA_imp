#include<iostream>
using namespace std;
void print(int n){
    //base case
    if(n==0){
        return ;
    }
    cout<<n<<endl;
    print(n-1);
}
int fact(int n){
    //base case mandatory stop case
    if(n==0){
        return 1;
    }
    return n * fact(n-1);
}
int power(int n){ // for 2^n 
    //base case
    if(n ==0 ){
        return 1;
    }
    int small = power(n-1);
    int big = 2 * small;
    return big;
}
int main()
{   int n ,m ,countNO;
    cin>>n>>m>>countNO;
    int ans = fact(n);
    cout<<ans<<endl<<endl;
    cout<<power(m)<<endl;
    print(countNO);
    return 0;
}