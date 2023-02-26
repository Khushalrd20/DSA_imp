#include<iostream>
#include<queue>
using namespace std;

class heap{
    public :
    int arr[100] ;
    int size ;

    heap(){
        arr[0] = -1 ;
        size = 0 ;
    }

    void insert(int val ){
        size+= 1 ;
        int index = size ;
        arr[index] = val ;

        while(index > 1){
            int parent = index/2 ;
            if(arr[parent] < arr[index]){
                swap(arr[parent],arr[index]) ;
            }
            else{
                return ;
            }
        }
    }

    void deleteFromHeap(){
        if(size == 0){
            cout<<" not possible"<<endl;
            return ;
        }
        //swap root with last node
        arr[1] = arr[size] ;
        
        //removes the element 
        size-- ;

        //propagate in correct position
        int i = 1 ;
        while(i< size){
            int leftIndex = 2*i  ;
            int rightIndex = 2*i  + 1 ;

            if(leftIndex < size && arr[i] < arr[leftIndex]){
                swap(arr[i] ,arr[leftIndex]) ;
                i = leftIndex ;
            }
            else  if(rightIndex < size && arr[i] < arr[rightIndex]) {
                swap(arr[i] ,arr[rightIndex]) ;
                i = rightIndex ;

            }
            else{
                return ; 
            }
            
        }


    }

    void print(){
        for(int i = 1 ;i<=size ;i++){
            cout<<arr[i] <<" ";
        }
        cout<<endl ;
    }
};

void heapify(int *arr ,int n ,int i){
    int largest = i ;
    int left = 2*i ;
    int right = 2* i +1 ;
    if(left <= n && arr[largest] < arr[left]){
        largest = left ;
    }
    if(right <= n && arr[largest] < arr[right]){
        largest = right ;
    }
    if(largest != i ){ // value updated
        swap(arr[largest] ,arr[i]) ;
        heapify(arr,n,largest) ;
    }
}

void heapSort(int * arr ,int n){
    int size = n ;
    //swap first and last
    while(size > 1){
        swap(arr[size],arr[1]);
        size-- ;
          //step 2 
        heapify(arr,size,1);
    }
  
}

int main()
{   
    heap h ;
    h.insert(55) ;
    h.insert(50) ;
    h.insert(54) ;
    h.insert(53) ;
    h.insert(52) ;
    h.print();

    h.deleteFromHeap() ;
    h.print() ;

    
    h.deleteFromHeap() ;
    h.print() ;

    int arr[6] ={-1,53,54,55,52,50} ;
    int n = 5 ;
    for(int i = n/2 ;i>0 ;i--){
        heapify(arr,n,i);
    }
    heapSort(arr,n);
    for(int i = 1 ;i<=n ;i++){
        cout<<arr[i] <<" " ;
    }
    cout<<endl;
    //max heap
    priority_queue<int>p ;
    p.push(4);
    p.push(3);
    p.push(5);
    p.push(2);
    cout<<"maxheap"<<endl;
    cout<<" top "<<p.top()<<endl ;
    p.pop();
    cout<<" top "<<p.top()<<endl;

    //min heap 

    priority_queue<int,vector<int>,greater<int>>minheap;
    minheap.push(4);
    minheap.push(3);
    minheap.push(5);
    minheap.push(2);
        
    cout<<"minheap"<<endl;

      cout<<" top "<<minheap.top()<<endl ;
    minheap.pop();
    cout<<" top "<<minheap.top()<<endl;
    return 0;
}