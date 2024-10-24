#include<iostream>
#include<deque>
using namespace std;

int main( int argc, char** argv){
    unsigned int i;
    deque<float> A;
    float n;
    while(cin>>n){
        if(n==0){
            break;
        }
        A.push_back(n);
    }
    unsigned int orginalsize = A.size();
    cout<<" the elements in the deque are "<<endl;
    for(auto i = 0; i<orginalsize; i++){ 
     (A[i]>0)? A.push_back(A[i]): A.push_front(A[i]);
        cout<<A[i] <<" ";
    } 
   }