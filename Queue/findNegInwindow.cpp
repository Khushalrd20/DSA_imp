//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends


vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
              
            deque<long long int>dq ;
            vector<long long int>ans ;
            //process for 1st window i.e -8 & 2
            for(int i = 0 ;i< K ;i++) {
                   //check negative 
                   if(A[i] < 0 ){
                       dq.push_back(i) ;
                   }
            }
            
            //push ans for 1st window 
            if(dq.size() > 0){
                ans.push_back(A[dq.front()]) ; //i.e -8
            }
            else{
                ans.push_back(0) ; //i.e -8
 
            }
            
            //for new windows i.e 2 & 3 
            for(int i = K;i<N ;i++){
                //popping -8 because its previous window element 
                //removal
                if(!dq.empty() &&  (i - dq.front()) >= K){
                    dq.pop_front() ;
                    
                }
                //pushing current element
                //adding
                 if(A[i] < 0 ){
                       dq.push_back(i) ;
                   }
                     //push ans for 1st window 
                 if(dq.size() > 0){
                         ans.push_back(A[dq.front()]) ; //i.e -8
                 }
                 else{
                        ans.push_back(0) ; //i.e -8
    
                 }
            }
            return ans; 
 }