
#include <iostream>
#include "prob2.h"
int main(){
    Stack<int> intStack(5);
    intStack.push(1);
    intStack.push(2);
    intStack.push(3);

    int topElement;
    if (intStack.pop(topElement)) {
        std::cout << "Popped element: " << topElement << std::endl;
    }
    std::cout<<" element at the top of stack "<<intStack.back()<<std::endl;
    std::cout << "Number of entries: " << intStack.getNumEntries() << std::endl;

    return 0;
}
