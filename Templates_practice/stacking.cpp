// the question is implement a stack using templates

#include<iostream>
using namespace std;

template<class T, int initialize = 10>
class Stack{
private:
    int size;
    int where;
    void Extend();
    T*content;
public:
    Stack();
    ~Stack();
    void Push(const T&);
    const T& Pop();
};

template <class T, int initialize>
Stack<T, initialize>::Stack(){
    content = new T[initialize];
    this->size = initialize;
    where = -1;
}
template <class T, int initialize>
Stack<T, initialize>::~Stack(){
    delete []content;
}

template<class T, int initialize>
void Stack<T, initialize>::Push(const T&data){
    if(where +1 == size){
        extend();
    }
    content[where++] = data;
}

template <class T, int initialize>
void Stack<T, initialize>::Extend(){
    T *newcontent= new T[2*size];
    for(int i = 0; i<size; i++){
        newcontent[i] = content[i];
    }
    delete [] content;
    content= newcontent;
    size = 2*size;
}

template<class T, int initialize>
const T&Stack<T, initialize>::Pop(){
    if (where==-1){
        cout"oops empty stack"
    }
    return content[where--];
}

int main(){
    Stack<int>intstack;
    for(int i=0; i<10; i++){
        intstack.Push(i);
    }
    for(int i = 0; i<10; i++){
        cout<<intstack.Pop()<<endl;
    }
}