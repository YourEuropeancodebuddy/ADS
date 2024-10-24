#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<float>A;
    float input;
    while((cin>>input)&&(input!=0)){
        if(input>0){
            A.push_back(input);
        }
        else{
            A.push_front(input);
        }
    }
    bool first = true;
    for(int i = 0; i<A.size(); i++){
        if(!first){
            cout<<" ";
        }
        cout<<A[i];
        first= false;
    }
    cout<<endl;
    cout<<"adding the value zero into the middle of the queue"<<endl;
    for(auto it = A.begin(); it!=A.end(); it++){
        if((*it<0) && (*next(it)>0)){
            A.insert(next(it),0);
        }
        cout<<*it;
    }
cout<<endl;
    cout<<" printing separated by semicolons"<<endl;
     for(int i = 0; i<A.size(); i++){
        if(first){
            cout<<";";
        }
        cout<<A[i];
        first= true;
    }
}
