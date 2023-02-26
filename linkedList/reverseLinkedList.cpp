#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
using namespace std;


    // Following is the class structure of the LinkedListNode class:

    // template <typename T>
    class LinkedListNode
    {
    public:
        int data;
        LinkedListNode *next;
         LinkedListNode(int d)
        {
            this->data = d;
            this->next = NULL;
        }
    };
void InsertAtHead(LinkedListNode* &head,int d){
    //new node create
    LinkedListNode* temp = new LinkedListNode(d);
    temp->next = head;
    head = temp;
}
void InsertAtTail(LinkedListNode* &tail,int d){
       LinkedListNode* temp = new LinkedListNode(d);
        tail->next = temp;
        tail = temp; // for above operation setting tail to new data


}

void InserAtPosition(LinkedListNode* &head ,LinkedListNode* &tail, int position ,int d){
   //for insert at starting 
   if(position == 1){
        InsertAtHead(head,d);
         return ;   
   }
    LinkedListNode* temp = head;  //temp is Node pointing to head
    int cnt = 1;
    while(cnt < position -1){  // this for we want node above position

        temp = temp->next;
        cnt++;
    }
    //for insert at end
    if(temp->next == NULL){
        InsertAtTail(tail,d);
        return ;
    }
  LinkedListNode* nodeToInsert = new LinkedListNode(d); // creating node for node we want to insert
    nodeToInsert -> next = temp -> next;
    temp->next = nodeToInsert;

}
void print( LinkedListNode *head){
     LinkedListNode *temp =head;
     while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
     }cout<<endl;
}

 void  *reverseLinkedList(LinkedListNode* head) 
{    //ITERATIVE WAY
    // Write your code here
    //if list is empty or contain only one element
    if(head == NULL || head->next == NULL){
        return head;
    }
    LinkedListNode *prev = NULL;
    LinkedListNode *curr = head;
    LinkedListNode *forward = NULL;
    while(curr != NULL){
        forward = curr ->next; // if cant take this above data will loss
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;


    
}
 LinkedListNode *reverse( LinkedListNode *&head){
    //recursive way
    if(head == NULL || head->next ==NULL){
        return head;
    }
     LinkedListNode * chotahead = reverse(head->next);
     head->next->next = head;
     head->next = NULL;
 }
int main(){
    LinkedListNode * node1 = new  LinkedListNode (10); 
    // Node* node2 = new Node(16); // dyamic memory allocation in heap for ll
    // dyamic memory allocation in heap for ll
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

   // head pointed to node1
     LinkedListNode * head = node1;  //for first node
     LinkedListNode * tail = node1; 
  
    cout<<"inserting at beginning"<<endl;
    InsertAtHead(head,11);
    print(head);
    InsertAtHead(head,12);
    print(head);
    cout<<"inserting at end(tail)"<<endl;
    InsertAtTail(tail,17);
    print(head); //trying to print with tail does not give expected ans
    InsertAtTail(tail,18);
    print(head);
    cout<<"inserting at any position "<<endl;
    InserAtPosition(head,tail,6,20);
    print(head);

    reverseLinkedList(head);
    print(head);

    

}