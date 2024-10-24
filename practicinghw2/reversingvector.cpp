#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int>vint;
    for(int i = 1; i<=30; i++){
        vint.push_back(i);
    }
    vint.push_back(5);
    reverse(vint.begin(), vint.end());
    for(auto it = vint.begin(); it!=vint.end(); it++){
        cout<<*it<< " ";
    }
    cout<<endl;
    replace(vint.begin(), vint.end(), 5, 129);
    for(auto el:vint){
        cout<<el<<" ";
    }
}