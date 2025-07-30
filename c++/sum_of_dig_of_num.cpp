#include<iostream>
using namespace std;
void sum_of_dig(int b){
    /*int a=b%10;
    b=b/10;
    int c=b%10;*/
    int sum=0;
    while(b>0){
        int a=b%10;
        sum = sum+a;
        b=b/10;
    }
    cout<<sum<<endl;
    
}
int main(){
    int n;
    cin>>n;
    sum_of_dig(n);
   
    
    return 0;
}