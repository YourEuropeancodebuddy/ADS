#include"Stack.h"

template<class T>
class Queue{
private:
    Stack<T>stack1;
    Stack<T>stack2;
    int size;
public:
    Queue(){
        size = 0;
    }
    void Enqueue(T data){
        stack1.push(data);
        this->size++;
    }
    void Dequeue(){
        if(stack2.isEmpty() == true){
            while(!stack1.isEmpty()){
                T temp = stack1.pop();
                stack2.push(temp);
                
            }
        }
        this->size--;
        stack2.pop();
    }
    bool isEmpty(){
        if(this->size==0)
        {
            return true;
        }
        else{
            return false;
        }
    }
};