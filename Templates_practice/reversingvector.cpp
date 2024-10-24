#include<iostream>
#include<vector>
using namespace std;

int main(){
    int size = 7;
    vector<int>vint;
    for(int i = 0; i<size; i++){
        vint.push_back(i);
    }
    cout<<"printing the content of the vector before sorting"<<endl;
    for(auto it = vint.begin(); it!=vint.end(); it++){
        cout<<*it<<endl;
    }
    cout<<"printing the reversed vector"<<endl;
    for(auto vit = vint.end()-1; vit>=vint.begin(); --vit){
        cout<<*vit<<endl;
    }
}