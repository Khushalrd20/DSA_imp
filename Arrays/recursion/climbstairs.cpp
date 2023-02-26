#include <bits/stdc++.h>
using namespace std;
// Count Ways To Reach The N-th Stairs 
int countDistinctWays(int nStairs) {
    //  Write your code here.
    if(nStairs < 0){//case for underground stairs
        return  0;
    }
    if(nStairs == 0){
        return 1; //ja ha se suru kiya vahi
    }
    return countDistinctWays(nStairs -1) + countDistinctWays(nStairs -2);
}

int main(){
    int n = 4 ; //8
    int ans = countDistinctWays(n  );
    cout<<ans<<endl;
}