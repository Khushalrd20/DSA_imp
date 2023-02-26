#include <bits/stdc++.h> 
using namespace std ;
class NQueue{
public:
    // Initialize your data structure.
    int *front ;
    int *rear ;
    int *arr;
    int *next ;
    int freespot ;
    int n ; 
    
    
    NQueue(int n, int s){
 
        front = new int[n] ;
        rear = new int[n] ;
        
        for(int i = 0 ;i<n ;i++){
            front[i] = rear[i] = -1 ;
        }
        next = new int[s];
        for(int i = 0 ;i<s ;i++){
          next[i] = i+1 ;
        }
        next[s-1] = -1 ;
        arr = new int[s];
        freespot = 0 ;
        
    
    }

    // Enqueues 'X' into the Mth queue. Returns true if it gets pushed into the queue, and false otherwise.
    bool enqueue(int x, int m){
        //check overflow or full cond 
        if(freespot == -1){
            return false ;
        }
        //find first index 
        int index = freespot ;
        
        //update freespot ;
        freespot = next[index] ;
        
        //check for 1st element to be inserted 
        if(front[m-1] == -1){
            front[m-1] = index ;
        }
        else{
            //link karayacha previous ele 
            next[rear[m-1]] = index;  
        }
        
        //update next ;
        next[index] = -1 ;
        
        //update rear ;
        rear[m-1] = index ;
        
        arr[index] = x ;
        return true ;
    }

    // Dequeues top element from Mth queue. Returns -1 if the queue is empty, otherwise returns the popped element.
    int dequeue(int m){
        //check underflow or empty 
        if(front[m-1] == -1){  
            return -1 ;
        }
        //find index to pop 
        int index = front[m-1] ;
        
        //front ko update 
        front[m-1] = next[index] ;
        
        //freespot ko manage 
        // linking after pop 
        next[index] = freespot ;
        freespot = index ;
        return arr[index] ;
    }
};