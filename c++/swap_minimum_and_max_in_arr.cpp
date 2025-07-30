#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int smallest = INT_MAX;
    int largest= INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            smallest = arr[i];
        }
        
    }
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    int temp_1 ;
    int temp_2 ;
    for(int i=0;i<n;i++){
        if(arr[i]==smallest){
            temp_1 = i;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]==largest){
            temp_2=i;
        }
    }
    swap (arr[temp_1],arr[temp_2]);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }
    
    
    
    
    
    
    
    
    
    return 0;
}