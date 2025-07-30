#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=0;
    int pow=1;
    while(n>0){
        int rem=n%10;
        n=n/10;
        ans=ans+rem*pow;
        pow=pow*2;
        
        
    }
    cout<<ans<<endl;
    
    
    return 0;
}