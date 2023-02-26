#include <bits/stdc++.h> 
/*************************************************************
    
    Following is the Binary Tree node structure:

    class TreeNode{

        public :
            int data;
            TreeNode *left;
            TreeNode *right;

            TreeNode(int data) {
                this -> data = data;
                left = NULL;
                right = NULL;
            }

            ~TreeNode() {
            if (left){
            delete left;
            }

            if (right){
            delete right;
            }
        }   
    };

*************************************************************/

 void inorder(TreeNode<int>* root,vector<int>&ans){
    if(root == NULL){
        return ;
    }
    inorder(root->left,ans);
    ans.push_back(root->data) ;
    inorder(root->right,ans);
}

vector<int> mergeArray(vector<int>&a,vector<int>&b){
    int i = 0,j=0 ;
    int k = 0 ;
    vector<int>ans(a.size() + b.size()) ;
    while(i < a.size() && j < b.size()){
        if(a[i] < b[j]){
            ans[k++] = a[i];
            i++;
        }
        else{
            ans[k++] = b[j];
            j++;
        }
    }
    while( i <a.size() ){
        ans[k++] = a[i];
            i++;
    }
    while(j < b.size()){
         ans[k++] = b[j];
            j++;
    }
    return ans;
}

TreeNode<int> *inorderToBST(int s ,int e ,vector<int>&ans){
    if(s > e){
        return NULL;
    }
    int mid = (s + e)/2 ;
    TreeNode<int>* root = new TreeNode<int>(ans[mid]);
    root->left = inorderToBST(s,mid-1,ans);
    root->right = inorderToBST(mid+1 ,e,ans);
    return root ;

}
TreeNode<int> *mergeBST(TreeNode<int> *root1, TreeNode<int> *root2){
    // Write your code here.
   
   //step 1 store inorder
    vector<int>bst1,bst2 ;
    inorder(root1,bst1);
    inorder(root2,bst2);

    //merge two arrays
    vector<int>arr= mergeArray(bst1,bst2);

    //step 3 
    return inorderToBST(0,arr.size()-1,arr);
    


}