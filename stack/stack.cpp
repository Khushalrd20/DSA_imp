#include<iostream>
using namespace std; // t.c o(1)
class Stack{
    //prop
    public :

    int *arr;
    int top ;
    int size;
    
    //behaviour
    Stack(int size){ // constructor
        this->size = size ;
        arr = new int[size];
        top = -1 ;

    }
    
    void push(int ele){
        if(size - top > 1){
            //space available
            top++ ;
            arr[top] = ele ;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }

    void pop(){
        if(top >= 0 ){
            top-- ;
        }
        else{
            cout<<"stack underflow"<<endl;
        }

    }
    
    int peek(){
        if(top >= 0 ){ // top >=0 means element  aaahe
             return arr[top];
        }
        else{
            cout<<"stack is empty"<<endl;
            return -1;
        }
       
    }

    bool empty(){
        if(top == -1){
            return true;
        }
        return false;
    }
};
int main()
{   
    Stack st(4);

    st.push(12);
    st.push(13);
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    if(st.empty()){
        cout<<"empty"<<endl;
    }
    else{
        cout<<"stack is  not empty"<<endl;
    }

    return 0;
}