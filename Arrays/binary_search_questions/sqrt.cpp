#include<iostream>
using namespace std;
int sqrt(int n){
    int s =0 ;
    int e = n-1;
    int mid = s+ (e-s)/2;
    long long int ans = -1;
    while(s<e){
        long long int square = mid * mid;
        if(square == n){
            return mid;
        }
        if(square < n){
            ans = mid;
            s =mid +1 ;
        }
        else{
            e = mid -1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
    
}


=
int main()
{   int n = 20;
    cout<<sqrt(n);
    return 0;
}