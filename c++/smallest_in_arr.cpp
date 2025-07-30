#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr [n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int smallest = +2147483647; // Initialize to maximum possible integer value
    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
    }
    }
    cout<<smallest<<endl;
    
    
    
    
    
    
    return 0;
}