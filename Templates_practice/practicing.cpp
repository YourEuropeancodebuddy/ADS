#include<iostream>

using namespace std;

template <class T>
T maximum_return(T arr[], int size){
    T maxi = arr[0];
    if(size==0){
        cout<< " the array is empty"<<endl;
    }
    else{
    for (int i = 0; i<size; i++){
        if(arr[i]>maxi){
            maxi = arr[i];
        }
    }
    return maxi;
    }
    return 0;
}

int main(){
    int arri [] = {1,43,4,34};
    cout<<maximum_return<int>(arri, 4)<<endl;
    float farray[] = {12.3,13.4,23.5,34.1};
    cout<<maximum_return<float>(farray,4)<<endl;
}