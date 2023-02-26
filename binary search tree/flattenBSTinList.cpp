#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/

void inorder(TreeNode<int>* root,vector<int>&ans){
    if(root == NULL){
        return ;
    }
    inorder(root->left,ans);
    ans.push_back(root->data) ;
    inorder(root->right,ans);
}
TreeNode<int>* flatten(TreeNode<int>* root)
{
    vector<int>ans ;
    //because inorder gives sorted order
    //
    inorder(root ,ans) ;
    TreeNode<int>*newRoot = new TreeNode<int>(ans[0]);
    TreeNode<int>*curr = newRoot ;
    for(int i = 1 ;i<ans.size();i++){
        TreeNode<int>*temp = new TreeNode<int>(ans[i]);
        curr->left = NULL ;
        curr->right = temp ;
        curr = temp ;
    }
    //3
    //for last node 
    curr->left =NULL;
    curr->right = NULL;
    return newRoot ;
}
