#include<iostream>
#include<deque>
#include<vector>
using namespace std;
int main(){
    const int size = 12;
    deque<int>dint;
    vector<int>vint;
    for(int i = 0; i<size; i++){
        vint.push_back(i);
    }
    for(int i = 0; i<size; i++){
        if(i%2==0){
            dint.push_front(vint[i]);
        }
        else{
            dint.push_back(vint[i]);
        }
    }

    for (int i = 0; i<dint.size(); i++){
        cout<<dint[i]<<endl;
    }

}