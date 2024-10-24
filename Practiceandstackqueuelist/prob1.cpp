#include<iostream>
#include "Stack.h"
using namespace std;

int main(){
    Stack<int> object(10);
    for (int i = 0; i<10; i++){
        object.push(i);
    }
    while(!object.isEmpty())
    cout<<object.pop()<<endl;
}