#include<iostream>
using namespace std;
#include <bits/stdc++.h> 
class MyCircularQueue {
public:
     int *arr ;
    int front ;
    int rear ;
    int size ;
    public:
    // Initialize your data structure.
    MyCircularQueue(int k){
        size = k  ;
        arr = new int[size] ;
        front = rear = -1 ;
    }
 
    
    bool enQueue(int value) {
        //check full condition 
        if(isFull()){
           // cout<<"Queue is Full" <<endl ;
            return false ;
        }
        else if(front == -1){
            //element to be pushed first time 
           front = rear = 0 ;
        }
        else if(rear == size-1 && front != 0){
            rear = 0 ;//cycle 
        }
        else {
            rear++ ;
        }
        arr[rear] = value ;
        return true ;
    }
    
    bool deQueue() {
        //check empty queue 
        if(front == -1){
            return false ;
        }
        int ans = arr[front] ;
        arr[front] = -1 ;
        if(front == rear){
            front = rear = -1 ;
        }
        else if(front == size -1){// last front
            front = 0 ;                
        }
        else{
            front++ ;
        }
        return true ;
        
    }
    
    int Front() {
        if(isEmpty()){
            return -1 ;
        }
        return arr[front];
        
    }
    
    int Rear() {
        if(isEmpty()) 
            return -1;
        return arr[rear];
    }
    
    bool isEmpty() {
        if(front == -1){
            return true ;
        }
        return false ;
    }
    
    bool isFull() {
       if(((rear + 1) % size) == front){ // we can use front ==  0 && rear == size -1 )||rear == (front-1)%(szie-1)
            return true;
        }
        return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */
int main()
{
    return 0;
}