#include<iostream>
using namespace std;

int main(){
    typedef int (*pf)(int, int);
    pf multiply = [](int a, int b)->int{return a*b;};
    cout<<multiply(3,4)<<endl;
    //using auto keyword
    auto multiply = [](int a, int b)->int{return a*b;};
    cout<<multiply(5,6)<<endl;

    for(int i = 0; i<5; i++){
        for(int j = 0; j<5; j++){
        auto myfunction = []() ->int{int a = 3, b =6; return a+b;}; // nothing caught
        auto myfunction = [i]()->int{return i+3;};// caught by value
        auto myfunction = [=]()->int{return i+j;};
        auto myfunction  = [&i]()->int{ i = i+3; return i+4;}; // caught i by reference 
        auto myfunction = [&]()->int{ i =j+2; return i+j;}; // caught all by refernce 

        }
        
    }
}