#include <iostream>
#include "Binarytree.h"
using namespace std;

int main() 
{ 
    Binarytree temp;
    temp.insert(50);
    temp.insert(30);
    temp.insert(20);
    temp.insert(40);
    temp.insert(70);
    temp.insert(60);
    temp.insert(80);
    Linkedlist list;
    temp.converttolinklist(list);
    list.reverse();  
    list.print();
    return 0; 
} 
  