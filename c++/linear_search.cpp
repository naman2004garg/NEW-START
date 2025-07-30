#include<iostream>
using namespace std;

void linear_search(int arr[], int n, int target){
    bool element_found = false;
    for(int i = 0; i < n; i++){
        if(arr[i] == target){
            element_found = true;
            cout << "Element found at index: " << i << endl;
        }
    }
    if(!element_found)
        cout << "Element not found in the array." << endl;
    

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin >> target;
    linear_search(arr, n, target);

    






    return 0;
}
