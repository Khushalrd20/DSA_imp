#include<iostream>
#include<queue>
using namespace std;

class Node{
    public :
    int data ; 
    Node *left ;
    Node *right ;

    Node(int d ){
        this->data  = d ;
        this->left = NULL ;
        this->right = NULL ;
    }
};

Node * buildTree(Node* root){
    //create root node first 
    cout<<"Enter your data : "<<endl ;
    int data ;
    cin>>data ;
    root = new Node(data) ;

    if(data == -1){
        return NULL ;
    }
    //for left part 
     cout<<"Enter your data to insert in left of  : "<<data<<endl ;
     root->left = buildTree(root->left) ;

     //for right part 
     cout<<"Enter your data to insert in right of  : "<<data<<endl ;
     root->right = buildTree(root->right) ;

     return root ;
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

void inorder(Node *root ){

    if(root == NULL){
        return ;
    }
    //l N R 
    inorder(root->left) ;
    cout<<root->data<<" " ;
    inorder(root->right) ;

}
void preorder(Node *root ){

    if(root == NULL){
        return ;
    }
    // N L R
    cout<<root->data<<" " ;
    preorder(root->left) ;
    preorder(root->right) ;

}

void postorder(Node *root ){

    if(root == NULL){
        return ;
    }
    //  L R N 
    
    postorder(root->left) ;
    postorder(root->right) ;
    cout<<root->data<<" " ;

}

void buildTreeFromLevelOrder(Node * &root){
    queue<Node * >q ;
    cout<<"ENTER DATA : "<<endl ;
    int data ;
    cin>> data ;

    root = new Node(data) ;
    q.push(root) ;

    while(!q.empty()){
        Node * temp = q.front() ;
        q.pop() ;
        cout<<"enter data to insert in left of : "<<temp->data<<endl ;
        int leftdata ;
        cin>>leftdata ;
        if(leftdata != -1){
            temp->left = new Node(leftdata);
            q.push(temp->left) ;
        }


        cout<<"enter data to insert in right of : "<<temp->data<<endl ;
        int rightdata ;
        cin>>rightdata ;
        if(rightdata != -1){
            temp->right = new Node(rightdata);
            q.push(temp->right) ;
        }

    }
}
int main()
{   
    Node* root =NULL ;

    buildTreeFromLevelOrder(root) ;
    levelOrderTransversal(root) ;
    //creting tree binaryss
    // root = buildTree(root) ;

    // //ouput of level order transversal 
    // cout<<"levelOrdertranversal : " <<endl ;
    // levelOrderTransversal(root) ;
    // //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1


    // //inoder
    
    // cout<<"inorderTransversal : " ;
    // inorder(root) ;
    // cout<<endl;
    // cout<<"preorderTransversal : " ;

    // preorder(root) ;
    // cout<<endl;
    // cout<<"postorderTransversal : " ;

    // postorder(root) ;
    return 0;
}