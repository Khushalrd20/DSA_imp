#include<iostream>
#include<vector>
using namespace std;
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m);
int main()
{  
    vector<int> ans;
    vector<int> brr;
    int array[10],i,brray[10],j;
    int size,m;
    cin>>size>>m;
    ans.push_back(array[i]);
    for(int i=0;i<size;i++){
        cin>>array[i];
        cout<<array[i];
    }
    brr.push_back(brray[j]);
    
    for(int j=0;j<m;j++){
        cin>>brray[j];
          cout<<brray[j];

    }
    
    //brr.push_back(2,3,1);

    
    
    findArrayIntersection(ans,size,brr,m);

    return 0;
}
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
    int i=0,j=0;
    vector<int>ans;
    while(i<n && j<m){
        if(arr1[i]==arr2[j]){
        ans.push_back(arr1[i]);
        i++;
        j++;
        cout<<arr1[i];
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    
    }
    
    return ans;
}

