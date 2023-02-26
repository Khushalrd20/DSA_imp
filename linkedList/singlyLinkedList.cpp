#include<iostream>
#include<map>
using namespace std;
class Node{ //node having two things data and its address of nex
    public :
    int data;
    Node* next ; // pointer of node type pointing to next address

    //constructor
    Node(int data){
        this->data = data; 
        this-> next = NULL;
    }
    //destructor calling manually
    //use destructor or use delete as to free memory
    ~Node(){
        int value = this->data;
        if(this->next !=NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"memory is free for node having data : "<<value<<endl;
    }
};

void InsertAtHead(Node* &head,int d){
    //new node create
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}
void InsertAtTail(Node* &tail,int d){
        Node* temp = new Node(d);
        tail->next = temp;
        tail = temp; // for above operation setting tail to new data


}

void InserAtPosition(Node* &head ,Node* &tail, int position ,int d){
   //for insert at starting 
   if(position == 1){
        InsertAtHead(head,d);
         return ;   
   }
    Node* temp = head;  //temp is Node pointing to head
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
    Node* nodeToInsert = new Node(d); // creating node for node we want to insert
    nodeToInsert -> next = temp -> next;
    temp->next = nodeToInsert;

}
void Deletion(int position , Node* &head){
    //for deleting starting node
    if(position == 1){
        Node *temp = head;
        head = head->next;
        temp->next = NULL; 
        delete temp;
    }
    else{
        //for middle or last
        Node* curr = head;
        Node* prev = NULL;
        int cnt =1;
        while(cnt<position){
            prev = curr;
            curr= curr->next;
            cnt++;
        }
        prev->next = curr->next; //means previous address pointing to curr next address
        curr->next =NULL;
        delete curr;
    }
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
//loop detection imp
bool detectLoop(Node* head){
    map<Node* , bool>visited;
    if(head == NULL){
        return false;
    }
    Node *temp = head ;
    while(temp !=NULL){
        if(visited[temp]==true){
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;

}

Node* floyldLoopDetect(Node* head){  // nODE * function represents node 
    if(head == NULL){
        return NULL;
    }
    Node* slow =head;
    Node* fast =head;
    while(slow != NULL &&fast !=NULL){
        fast = fast ->next;
        if(fast != NULL){
            fast = fast ->next;
        }
        slow = slow ->next;
        if(slow == fast){

            return slow;
        }
    }
    return NULL;
}

Node* getStartingnodeOfLoop(Node* head){
    if(head == NULL){
        return NULL;
    }
    Node* intersection = floyldLoopDetect(head); // we can get slow = fast at this point
    Node* slow = head;
    if(intersection == NULL){
        return NULL;
    }
    while(slow != intersection){
        slow = slow ->next;
        intersection = intersection->next;
        cout<<intersection->data;
    }

    return slow;
}

void RemoveLoop(Node* head){
    if(head == NULL){
        return ;
    }
    
    Node* startingLoop = getStartingnodeOfLoop(head);
    Node* temp = startingLoop;
    while(temp->next != startingLoop){
        temp = temp->next;
    }
    temp->next = NULL;
}

//removing duplicates in sorted list
Node* deleteDuplicates(Node* head){
    //empty list
    if(head ==NULL){
        return NULL;
    }
    //Non empty list
    Node* curr =head;
    while(curr != NULL){
        //  ==  checking node datas are equal
        if((curr->next != NULL) && curr->data == curr ->next->data   ){
            Node* next_next = curr->next->next;
            Node* nodeTodelete = curr ->next;
            delete nodeTodelete;
            curr->next = next_next;

        }
        //  !=
        else{
            curr = curr ->next ;
        }
    }
    return head;
}

Node * sortLL(Node * head){
    int cnt = 1;
    Node * curr = head;
    while(curr != NULL){
        if(curr->data != curr->next->data){
            
        }
    }
}
Node *removeDuplicates(Node *head)  // from unsorted ll
{
   
    if(head == NULL)
        return NULL;
    
    Node* temp = head;
    while(temp != NULL){
        Node*temp2 = temp ;
        while(temp2!=NULL){
            if(temp2->next != NULL && temp->data == temp2->next->data){ // cj=hecking main node with all nodes traversing
            Node* next_next = temp2->next->next;
            temp2->next->next = NULL;
            Node *NDelete = temp2->next;
            delete NDelete;
            temp2->next = next_next;
            }
            else{
                temp2 = temp2->next;
            }
         
        }
           temp = temp ->next;
   
    }
         return head;
}
void print(Node* &head){
    //create temp pointer to head
    Node* temp = head;
    //perform upto address not equal to null
    while(temp != NULL){
        cout<<temp->data<<" " ;
        temp = temp->next;
    }cout<<endl;
}
int main()
{   Node* node1 = new Node(10); 
    // Node* node2 = new Node(16); // dyamic memory allocation in heap for ll
    // dyamic memory allocation in heap for ll
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

   // head pointed to node1
    Node* head = node1;  //for first node
    Node* tail = node1; 
  
     cout<<"inserting at beginning"<<endl;
    InsertAtHead(head,11);
    print(head);
    InsertAtHead(head,11);
    print(head);
    cout<<"inserting at end(tail)"<<endl;
    InsertAtTail(tail,12);
    print(head); //trying to print with tail does not give expected ans
    InsertAtTail(tail,12);
    print(head);
    cout<<"inserting at any position "<<endl;
    InserAtPosition(head,tail,6,20);
    print(head);

    cout<<"deletion at any position"<<endl;

    // Deletion(1,head);
    // print(head);
    //  tail->next = head->next;

     if(isCircularList(tail)){
        cout<<" circular LL"<<endl;
    }
    else{
        cout<<" not circular list "<<endl;
    }

    cout<<"detect loop : "<<endl<<endl;
    if(detectLoop(head)){
        cout<<"cycle is present "<<endl;

    }
    else{
        cout<<"cycle is absent"<<endl;
    }

    if(floyldLoopDetect(head) != NULL){
          cout<<"cycle is present "<<endl;
    }
    else{
        cout<<"cycle is absent"<<endl;
    }
    Node* ans = getStartingnodeOfLoop(head);
    cout<<"starting node of loop is  : "<<ans->data<<endl;

    RemoveLoop(head);cout<<endl; // o(n)  s.c = o(1)
    print(head);
    if(floyldLoopDetect(head) != NULL){
          cout<<"cycle is present "<<endl;
    }
    else{
        cout<<"cycle is absent"<<endl;
    }

    //removing duplicaates
    deleteDuplicates(head);
    print(head);



    return 0;
}
