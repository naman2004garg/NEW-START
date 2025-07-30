#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans=0;
    int pow=1;
    while(n>0){
        int rem=n%2;
        ans += rem * pow;
        n = n/2;
        pow = pow*10;      
    }
    cout << ans << endl;
    return 0;
}