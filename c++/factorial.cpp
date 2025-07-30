#include<iostream>
using namespace std;
void factorial(int b){
    int fact=1;
    for(int i=1;i<=b;i++){
        fact=fact*i;
    }
    cout<<fact;
  
    
}
int main(){
    factorial(10);
   
    
    return 0;
}