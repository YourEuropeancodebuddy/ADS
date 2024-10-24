#include<iostream>
#include<deque>
using namespace std;

int main( int argc, char** argv){
    unsigned int i;
    deque<float> A;
    float n;
    while((cin>>n) &&(n!=0)){
        if(n>0){
            A.push_back(n); // inserting at the end 
        }
        else{
            A.push_front(n); // inseting the negative in front
        }
    }
    cout<<" the elements in the deque are "<<endl;
    for(auto it = A.begin(); it!= A.end(); it++){
        cout<<*it;
        if(next(it)!= A.end()){
            cout<<" ";
        }
    }
    cout<< endl;
    for(auto it = A.begin(); it!= prev(A.end()); it++){
        if(*it <0 && * next(it)>0){
            A.insert(next(it), 0);
        }
    }

    for(auto it = A.begin(); it!= A.end(); it++){
        cout<<*it;
        if(next(it)!= A.end()){
            cout<<"; ";
        }
}
}