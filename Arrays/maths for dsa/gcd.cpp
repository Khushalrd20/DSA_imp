// gcd(a,b) = gcd (a-b ,b)
#include<iostream>
using namespace std;
int gcd(int a ,int b){
    if(a==0){
        return b;
    }
    else{
        return a;
    }
    //convert one in to 0
    while(a != b ){
        if(a>b){
            a = a - b;
        }
        else{
            b= b - a;
        }
    } 
}

int main()
{   int a = 24 , b = 72;
    cout << gcd(a,b);
    return 0;
}