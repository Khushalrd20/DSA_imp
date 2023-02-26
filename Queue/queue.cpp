#include <bits/stdc++.h> 
using namespace std ;
class Queue {
public:
    int fronti ;
    int rear ;
    int *arr;
    int size ;
    
    Queue() {
        size = 100001 ;
        arr = new int[size] ;
        fronti = 0 ;      
        rear = 0 ;

        
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(fronti == rear){
            return true ;
        }
        else 
             return  false ;
    }

    void enqueue(int data) {
       //check full condition
        if(rear == size ){
            cout<<"Queue is Full"<<endl ;
        }
        else{
            arr[rear] = data ;
            rear++;
            
        }
    }

    int dequeue() {
      if(fronti == rear){
          return -1 ;
      }
        else{
          int ans = arr[fronti] ;
          arr[fronti] = -1 ;
          fronti++ ;
          if(fronti == rear){
              fronti = 0 ;
              rear  = 0 ;
          }
           return ans ;
        }
          
      
    }

    int front() {
        if(fronti == rear){
            return -1 ;
        }
        else
            return arr[fronti];
    }
};