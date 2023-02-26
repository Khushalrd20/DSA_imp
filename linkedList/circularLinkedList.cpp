#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    //constructor
    Node(int d){
        this->data = d;
        this->next = NULL;
    }
    //destruction
    ~Node(){
    int val = this->data;
    if(this->next != NULL){
        delete next;
        this->next = NULL;

    }
    cout<<" memory free for : "<<val<<endl;
    }
};
void InsertNode(Node* &tail, int element ,int d){
    //element is position after newnode we wanT to insert
    //if list is empty
    if(tail == NULL){
        Node *temp = new Node(d);
        tail = temp;
        temp ->next = temp; //brcause it is circular linked list
    }
    //assuming element is present
    else{
        Node*curr = tail;  
        while(curr->data != element){
            curr = curr->next;
        }
        //create new node
        Node*temp =new Node(d);
        temp->next =  curr->next;
        curr->next = temp ;


    }
}
void Delete(Node *&tail ,int value){
    //value which we want to delete
    //if list is empty
    if(tail == NULL){
        cout<<" list is empty"<<endl;
    }
    else{
        //for non empty list
        Node*prev = tail;
        Node*curr = prev->next;

        while(curr->data != value){ // loop upto value is equal to curr data
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next ;
        //for 0ne node
        if(curr == prev){
            tail = NULL;

        }
        //for greater than one node
        if(tail == curr){ 
            tail = prev ;
        }
        curr->next = NULL;
        delete curr;
         
    }
}
//traversing
void print(Node*&tail){
    Node*temp = tail;
    if(tail == NULL){
        cout<<" empty list"<<endl;
    }
     do{ // using do while because while loop not giving first node 
        cout<<temp->data<<" ";
        temp = temp->next;
        
    } while(tail != temp);cout<<endl;
}

bool isCircularList(Node* tail){
    //check for empty
    if(tail == NULL){
        return NULL;
    }
    //1 node and greater than one node have same logic
    Node*temp = tail->next;
    while(temp != NULL && temp != tail){
        temp = temp->next;
    }
    if(temp == tail){
        return true;
    }
    return false;
}

int main()
{   
    Node*tail = NULL ; // LIST IS EMPTY
    InsertNode(tail,2,1);
    print(tail);

    InsertNode(tail,1,2);
    print(tail);

    InsertNode(tail,2,5);
    print(tail);

    // Delete(tail,5);
    // print(tail);

    // Delete(tail,1);
    // print(tail);
    
    // Delete(tail,2);
    // print(tail);

    if(isCircularList(tail)){
        cout<<" circular LL"<<endl;
    }
    else{
        cout<<" not circular list "<<endl;
    }

    return 0;
}
//handlE three case
//1 empty list 2 : 1 node list 3 : greater than 1 node list