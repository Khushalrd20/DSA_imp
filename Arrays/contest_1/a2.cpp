#include<iostream>
using namespace std;
   //three way split
int threeWaySplit(int n, int arr[]){
   // here we are using two pointer approach 
   //so we defined our first pointer as l i.e low and last pointer as h i.e high which will be the last element of the array 
   int s=0;
   int e=n-1;
   int ans=0;
   
   int lsum=arr[0];  //here we take the sum of left set  and sum of right se
   int rsum=arr[n-1]; // because questions asked us that sum of (set1 = set3) 
   while(s<e) { 
       //now take 3 conditons as lsum == rsum , lsum<rsum and lsum>rsum
       if(lsum == rsum) { 
           ans = lsum;
           lsum+=arr[s+1];
           s++;
       }
       else if(lsum < rsum) { //we need to increase the lsum here so add the 
           lsum+=arr[s+1]; // element next to lsum to lsum and increase pointer
           s++;
       }
       else {          // lsum > rsum 
           //here we applied same logic to increase rsum as it is low 
           rsum+=arr[e-1];
           e--;
       }
       
   }
   return ans;
}

int main()
{
    return 0;
}  