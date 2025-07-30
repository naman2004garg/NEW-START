#include<iostream>
using namespace std;
void minimum(int a, int b){
    if(b>a){
        cout<<a;
    }
    else{
        cout<<b;
    }
    
    
}
int main(){
    int i;
    int j;
    cin>>i;
    cin>>j;
    minimum(i,j);
    
    
    return 0;
}