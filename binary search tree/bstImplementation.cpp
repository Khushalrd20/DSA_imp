#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public :
        int data ;
        Node* left ;
        Node* right ;

        Node(int d){
            this->data = d ;
            this->left = NULL ;
            this->right = NULL ;
        }
        
};
//insertion
Node * InsertIntoBST(Node * root ,int data){
    //base case
    if(root == NULL){
        root = new Node(data) ;
        return root ;
    }

    if(data > root->data){
        root->right = InsertIntoBST(root->right,data) ;
    }
    else{
        root->left = InsertIntoBST(root->left,data) ;
    }
    return root ;
}
void takeInPut(Node * &root){
    int data ;
    cin>>data ;
    while(data != -1){
        root = InsertIntoBST(root ,data);
        cin>>data ;
    }
}
void levelOrderTransversal(Node* root){
    
    //love solution
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            // purana level complete traverse ho chuka hai
            cout << endl;
            if (!q.empty())
            {   
                // queue still has some child ndoes
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }

}
Node* minval(Node*root ){
     Node*temp = root ;
            while(temp->left!= NULL){
                temp = temp->left ;
            }
            return  temp;
}
Node* deleteNode(Node*root ,int val){
    if(root == NULL){
        return root ;
    }
    if(root->data== val){
        //0 child 
        if(root->left == NULL && root ->right == NULL){
            delete root ;
            return NULL ;
        }

        //1 child
           // left or right
           //left
           if(root->left != NULL && root->right ==NULL){
                Node * temp = root ->left;
                delete root ;
                return temp ;

           } 
        //    right
             if(root->left == NULL && root->right !=NULL){
                 Node * temp = root ->right;
                delete root ;
                return temp ;

           } 
        //2 child
        if(root->left != NULL && root->right != NULL){
            int mini = minval(root->right)->data ;
           
            root->data =  mini ; 
            root->right = deleteNode(root->right,mini) ;
            return root ;
            
        }
    }
    else if(root->data > val){
        root->left = deleteNode(root->left ,val);
        return root ;
    }
    else{
           root->right = deleteNode(root->right ,val);
           return root ;
    }

}
int main()
{
    Node * root = NULL ;
    takeInPut(root) ;
    levelOrderTransversal(root);
    cout<<"enter node you want to delete : "<<endl ;
    int node ;
    cin>> node;
    deleteNode(root ,node );
    levelOrderTransversal(root);
    return 0;
}