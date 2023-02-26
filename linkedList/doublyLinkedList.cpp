#include<iostream>
using namespace std;

class Node{
    public :
    int data ;
    Node*prev;
    Node*next;
    //constructor
    Node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
    //destructor - memory deallocation
    ~Node(){
        int val = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
         cout<<"memory is free for node having data : "<<val<<endl;
    }
};

void print(Node* &head){
    Node*temp =head;
    //perform upto address not equal to null
    while(temp != NULL){
        cout<<temp->data<<" " ;
        temp = temp->next;
    }cout<<endl;

}
int  length(Node* &head){
    Node*temp  = head;
    int cnt = 0;
    while(temp != NULL){
        cnt++;
        temp = temp->next;
    }
    return cnt;
}
void InsertAthead(Node* &head , int d){
    //if list is empty
    if(head == NULL){
        Node* temp = new Node(d);
        head= temp;
    }
    //list is not empty
    else{
        Node* temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp ;
    }
}
void InsertAtTail(Node* &tail , int d){
      //if list is empty
      if(tail == NULL){
        Node * temp = new Node(d);
        tail = temp;
      }
      else{
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev =  tail;
        tail = temp;
      }
}
void InsertAtPosition(Node*&head ,Node*&tail , int position , int d){
    //inserting at start
    if(position == 1){
        InsertAthead(head,d);
        return;
    }
      Node *temp = head;
    int cnt = 1;
    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }
    //inserting at end 
    if(temp->next== NULL){
        InsertAtTail(tail,d);
    }
    //inserting at any position
      Node *insertNode = new Node(d);
      insertNode->next =temp->next;
      temp->next->prev = insertNode;
      temp->next = insertNode;
      insertNode->prev = temp;  // pllacing 4 pointers at right addresss

}
void Delete(Node*head , int position){
    if(position == 1){
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        Node*curr = head ;
        Node*prev = NULL;

        int cnt = 1;
        while(cnt<position){
            prev = curr;
            curr = curr->next;
            cnt++ ;
        }
        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}


int main()
{   
    Node* node1 = new Node(10);
    Node* head = node1;
    Node*tail = node1;
    print(head);
    cout<<" length : "<<length(head)<<endl;
    InsertAthead(head,11);
    print(head);
     cout<<" length : "<<length(head)<<endl;

     InsertAtTail(tail,9);
     print(head);
     InsertAtPosition(head,tail,2,8);
     print(head);

     Delete(head,2);
     print(head);
    return 0;
}