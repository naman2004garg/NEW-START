#include<iostream>
#include<cmath>
using namespace std;
void prime(int n){
    bool flag;
    for (int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            flag=0;
            break;
        }
        else{
            flag=1;
        }
    }
    if(flag==1){
        cout<<n<<endl;
    }
    else{
    }
}
int main(){
    int n;
    cin>>n;
    for(int i=2;i<=n;i++){
        prime(i);
    }
    






return 0;}
