#include<iostream>
#include<complex>
using namespace std;

template <class T>
int array_search(T arr[], int size, T searching){
    for(int i = 0; i<size; i++){
        if(searching== arr[i]){
            cout<<"element found"<<endl;
            return i;
        }
    }
     cout<<"element not found"<<endl;
        return -1;
}

int main(){
    int intarr [] = {1,2,43,54};
    cout<<array_search<int>(intarr,4,1)<<endl;
    float floatarr [] = {2.2,43.5,6.7,2.3,1.1};
    cout<<array_search<float>(floatarr,5,1.1)<<endl;
    string strinarr[] = {"hello", "Nahimana", "arakaza", "Renatha"};
    cout<<array_search<string>(strinarr, 4, "Nahimana")<<endl;
    complex<double>complexarr[9];
    for(int i = 0; i<9; i++){
        complexarr[i] = complex<double>(i+1, i*2);
    }
    cout<<array_search<complex<double> >(complexarr, 9, complex<double>(2,4))<<endl;
    return 0;
}