// lambda functions are functions that once called they cannot be called again 

#include<iostream>
using namespace std;
int main(){
    typedef int(*pf)(int, int);
    pf add = [](int a, int b)->int{return a+b;};
    cout<<add(2,4)<<endl;

    // using auto
    auto myadd = [](int a, int b) ->int{return a+b;};
    cout <<myadd(3,5)<<endl;

    for(int i = 0; i<10; i++){
        for(int j = 0; j<3; j++){
        auto myx = []()-> int{int a= 3,  b = 4; return a+b;};
        auto myx = [i]()->int{return i+3;};
        auto myx = [=]()->int{return i+j;};
        auto myx = [&i]()->int{i = i+5; return i+3;};
        auto myx = [&]()->int{i = j+2; return i+j;};

        }
    }
}
