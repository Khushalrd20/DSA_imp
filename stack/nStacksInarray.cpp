#include <bits/stdc++.h> 
class NStack
{    
    int *arr ;
    int *top ;
    int *next ;
    
    int freespot ;
    int n ,s ;
public:
    // Initialize your data structure.
    NStack(int N, int S)
    {    s =S ;
         n =N ;
     //arr creations
        arr = new int[s] ;
        top = new int[n] ;
        next = new int[s] ;
         
     for(int i = 0 ;i<n;i++){
        top[i]  = -1 ;
     }
     
     for(int i = 0 ;i<s;i++){
         next[i] = i+1  ;
     }
     //update last indext o f next to -1 because its after last element of arr
     next[s-1] = -1 ;
     freespot = 0 ; //because starting with first arr[0] i .e free
        
    }

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m)
    {
        if(freespot == -1 ){
            //i.e stack is empty
            return -1;
        }
        //find index ;
        int index = freespot ;
        
        //update freespot 
        
        freespot = next[index] ; //i.e 1 now 
        
        //insert in array ;
        arr[index] = x ; // i.e x = element want to pUsh
        
        //update next ;
        next[index] = top[m-1] ;
        
        //update top 
        top[m-1] = index ;
        return 1 ;
    }

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {    
        //check underflow condition 
        if(top[m-1] == -1){
            return -1 ;
        }
        //reverse push operation for pop operation 
        int index = top[m-1] ;
        
        top[m-1] = next[index] ;
        next[index] = freespot ;
        freespot = index ;
        return arr[index] ;
    }
};