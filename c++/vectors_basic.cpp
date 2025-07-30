#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec ={1,2,3};
    for(int i:vec){
        cout<<i<<endl;
    }
    cout<<vec.size()<<endl;
    vec.push_back(2);
    vec.push_back(20);
    cout<<vec.size()<<endl;
    vec.pop_back();
    cout<<vec.size()<<endl;
    for(int i :vec){
        cout<<i<<" ";
    }
    cout<<"\n";
    cout<<vec.back()<<endl;
    cout<<vec.front()<<endl;
    cout<<vec.at(2)<<endl;
    
    
    
    
    
    
    
    
    return 0;
}