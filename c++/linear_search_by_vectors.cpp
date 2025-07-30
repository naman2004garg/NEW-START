#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec ={1,2,3,4};
    int target;
    cin>>target;
    for(int i=0;i<vec.size();i++){
        if(vec[i]==target){
            cout<<i<<endl;
        }
    }
   
    
    
    
    
    
    
    
    
    return 0;
}