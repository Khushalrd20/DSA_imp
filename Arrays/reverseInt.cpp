#include<iostream>
using namespace std;
int reverseInt(int x){
    int min = INT_MIN;
    int max = INT_MAX;
    int result =0 ;
    while(x){
        int digit = x%10;
        x =x /10;
        // for leetcode it gives runtime error 
        //so for solving error we write these lines which i cant understand
        if(result > max/10 || result == max && digit >= max%10){
            return 0;
        }
        
        if(result < min/10 || result == min && digit <= min%10){
            return 0;
        }
        

        result = result * 10 + digit;

    }
    return result;
}
int main()
{   int x= 1;
    cout<<reverseInt(x);
    return 0;
}