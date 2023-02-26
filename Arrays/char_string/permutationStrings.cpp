#include<iostream>
using namespace std;
class Solution {
    private:
    bool checkequal(int a[26],int b[26]){
        for(int i=0;i<26;i++){
            if(a[i]!=b[i]){
                return 0;
            }
            
        }
        return 1;
    }
    public:
    
    bool checkInclusion(string s1, string s2) {
        int count1[26]={0};  //counting in s1 string and storing
        for(int i=0;i<s1.length();i++){
            int index = s1[i] - 'a';
            count1[index]++;
        }
        int count2[26]={0};
        int i=0;
        int windowsize=s1.length();
        while(i<windowsize && i<s2.length()){
            int index = s2[i] -'a';
            count2[index]++;
            i++;
            
        }
        if(checkequal(count1,count2)){
            return 1;
        }
        //
        while(i < s2.length()){
            char newchar=s2[i];     //addding new char 
            int index =newchar - 'a';
            count2[index]++;
            
            char oldchar =s2[i - windowsize];
            index = oldchar - 'a';  //deleting old char  checking abov
            count2[index]--;
            i++;
            if(checkequal(count1,count2)){
               return 1;
            }
            
            
        }
        return 0;
        
    }
};
int main()
{   string s1,s2;
    cin>>s1;
    cin>>s2;

    Solution myobj;
    bool found = myobj.checkInclusion(s1,s2);
    if(found){
        cout<<"found"<<endl;

    }
    else
        {
            cout<<"not found"<<endl;
        
        }

    return 0;
   
}