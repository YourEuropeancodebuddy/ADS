#include <iostream>
#include "problem9_1a.h"
using namespace std;

int main()
{
    Stack<int> temp(10);
    for (int i = 0; i < 10; i++)
    {
        temp.push(i);
    }
    //temp.push(9); //this will bring excepition
    while (!temp.isEmpty())
    {
        cout << temp.pop() << endl;
    }
   // cout << temp.pop() << endl; //another exception
}