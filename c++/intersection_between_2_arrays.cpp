#include <bits/stdc++.h>
using namespace std;
void intersection(int arr_1[],int arr_2[],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr_1[i]==arr_2[j]){
                cout<<arr_2[j]<<endl;
            }
        }
    }
    
}

int main() {
    int m ,n;
    cin>>m;
    cin>>n;
    int arr_1[m];
    int arr_2[n];
    for(int i=0;i<m;i++){
        cin>>arr_1[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr_2[i];
    }
    intersection(arr_1,arr_2,m,n);

}
