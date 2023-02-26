#include<iostream>
using namespace std;
int fibo(int m){
    if(m == 0){
        return 0;
    }

    if(m == 1){
        return 1;
    }
    return fibo(m-1) + fibo(m-2);
}
int main()
{   int m = 10;
    int ans = fibo(m);
    cout<<ans;
    return 0;
}