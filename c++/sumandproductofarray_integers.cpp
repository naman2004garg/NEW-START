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
    int sum=0;
    int prod =1;
    for(int i=0;i<n;i++){
        sum = sum + arr[i];
        prod = prod * arr[i];
    }
    cout<<sum<<endl;
    cout<<prod<<endl;
    
    
    
    
    
    
    
    
    
    return 0;
}