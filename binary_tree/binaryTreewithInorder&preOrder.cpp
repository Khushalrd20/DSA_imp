//{ Driver Code Starts
//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

// } Driver Code Ends

/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
    public:
    // void createMapping(int in[],map<int,int>&NodeToIndex,int n){
    //     for(int i = 0 ;i<n;i++){
    //         NodeToIndex[in[i]] = i ;
    //     }
    // }
    
    // int search(int in[] , int element , int n ){
    //     for(int i = 0 ;i<n ;i++){
    //         if(in[i]==element){
    //             return i ; 
    //         }
    //         return -1;
    //     }
    // }
    // Node * solve(int in[],int pre[],int &Index,int inStart ,int inEnd,int n){
    //     //base case 
    //     if( index > n || inStart > inEnd){
    //         return NULL;
    //     }
    //     int element = pre[Index++];
    //     Node * root = new Node(element);
      
    //     int position = search(in,element,n);
        
    //     //solve for left
    //     root->left = solve(in,pre,Index,inStart,position-1,n);
    //     root->right = solve(in,pre,Index,position+1,inEnd,n);
        
    //     return root ;
        
        
    // }
    // Node* buildTree(int in[],int pre[], int n)
    // {
    //     // Code here
    //     //statting with starting index of preorder
    //     int preIndex = 0 ;
    //     // map<int,int>NodeToIndex;
    //     // createMapping(in,NodeToIndex ,n);
    //     Node * ans = solve(in,pre,preIndex,0,n-1,n);
    //     return ans ;
    // }
     int search(int in[],int start,int end,int cur){
        for(int i=start;i<=end;i++){
            if(in[i]==cur){
                return i;
            }
        }
        return -1;
    }
    
    Node*solv(int in[],int pre[],int &index,int start,int end){ // inStart and inEnd
        if(start>end){
            return NULL;
        }
        
        int cur=pre[index];
        index++;
        
        Node*node=new Node(cur);
        
        if(start==end){
            return node;
        }
        
        int pos=search(in,start,end,cur);
        node->left=solv(in,pre,index,start,pos-1);
        node->right=solv(in,pre,index,pos+1,end);
        
        return node;
    }
    
    Node* buildTree(int in[],int pre[], int n)
    {
        int index=0;
        Node*ans=solv(in,pre,index,0,n-1);
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
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}

// } Driver Code Ends