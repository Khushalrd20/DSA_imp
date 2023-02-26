/********************************
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

********************************/

Node* sortList(Node *head)
{
    // Write your code here.
    if(head == NULL)
        return NULL;
    
    Node*temp = head;
    int zeroC= 0;
    int oneC = 0;
    int twoC = 0;
    while(temp != NULL){
        if(temp->data == 0 ){
            zeroC++;
        }
        else if(temp->data == 1){
            oneC++;
        }
        else if(temp->data == 2){
            twoC++;
        }
        temp = temp->next;
    }
     temp = head ; // ones again starting from 1 st node
    while(temp != NULL){
        if(zeroC != 0){
            temp->data = 0 ;
            zeroC--;
        }
        else if(oneC != 0){
            temp->data = 1 ;
            oneC--;
        }
        else if(twoC != 0){
            temp->data = 2 ;
            twoC--;
        }
        temp = temp->next;
    }
    return head;
}
