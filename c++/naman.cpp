#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n;
    cin>>n;
    bool flag;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            flag = false;
            break;
        } else {
            flag = true;
        }


    }
    if(flag==true){
        cout<<"Prime"<<endl;
    }
    else{
        cout<<"Not Prime"<<endl;
    }




return 0;
}