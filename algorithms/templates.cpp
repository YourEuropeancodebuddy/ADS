#include<iostream>

using namespace std;
template<class T>
T multiplying(T a, T b){
    return a +b;
}

int main(){
    int a = 10;
    int b =20;
    cout<<multiplying<int>(a,b)<<endl;
}