#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int last=n-1;
    int start=0;
    while(start<last){
        swap(arr[start],arr[last]);
        start++;
        last--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
    
    
    
    
    
    
    
    