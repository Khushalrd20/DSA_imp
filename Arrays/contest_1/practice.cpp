#include<iostream>//self tried  giving tle because of recursion
#include<bits/stdc++.h>
using namespace std;
// int counti(int n)
// {
//     int count =0 ; 
//      if(n % 2 != 0)
//       {

//             count += 1;
//       }

//         // Divide by 2
//         n >>= 2;
    

//     return count;
// }
 int countSetBits(int n){
 if (n == 0)
        return 0;
  
    else
  
        // if last bit set add 1 else add 0
        return (n & 1) + countSetBits(n >> 1);


}

int count(int n){
    vector<int>ans;
    
    for(int i =0 ;i<= n;i++){
       int k =  countSetBits(i);
        ans.push_back(k);
       // cout<<ans[i]<<endl;
       
    }
    int sum = 0;
    for(int i =0;i<ans.size();i++){
        sum+=ans[i];
    }
    return sum;

    
}

int main()
{   int n = 3;
   // cout<<countSetBits(n)<<endl;
    cout<<count(n);

    return 0;
}