//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{   private :
    bool knows(vector<vector<int> >& M ,int a ,int b){
        if(M[a][b] == 0){
            return false ;
        }
        return true;
    }
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int>s ;
        for(int i = 0 ;i<n ;i++){
            s.push(i) ; //pushing peoples
        }
        while(s.size() > 1){
            int a = s.top() ;
            s.pop();
            
            int b = s.top() ;
            s.pop();
            
            if(knows(M,a,b)){
                s.push(b);
            }
            else{
                s.push(a);
            }
            
        }
        int ans = s.top();  //only one in stack 
        //VERIFY ans satisfyes the condition that asn knows no one  but all knows ans
        int zeroCnt = 0 ;
        for(int i = 0 ;i<n;i++){
            if(M[ans][i] == 0){
                zeroCnt ++ ;
            }
        }
        if(zeroCnt != n) {
            return  -1;
        }
         int oneCnt = 0 ;
        for(int i = 0 ;i<n;i++){
            if(M[i][ans] == 1){
                oneCnt ++ ;
            }
        }
        if(oneCnt != n-1) {  // ignore digonal thats why n -1 i.e  for same person
            return  -1;
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends