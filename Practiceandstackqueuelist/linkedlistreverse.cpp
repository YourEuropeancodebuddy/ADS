#include<iostream>
#include "linkedlistreverse.h"
using namespace std;

int main(){
    Linkedlist object;
    for(int i = 0; i<10; i++){
        object.push(i);
    }

    object.reverse();
    object.print();

    
}