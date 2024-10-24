#include<iostream>
using namespace std;
template<class T>
class Stack{
private:
    int size;
    int where;
    T *content;
public:
    Stack();
    ~Stack();
    Stack(const Stack&);
    Stack(int size);
    bool Push (T element);
    bool Pop(T &out);
    T back();
    int getNumberentries();
};

template<class T>
Stack<T>::Stack(){
    this->size = 10;
    this->where = -1;
    content = new T[this->size];
}
template< class T>
Stack<T>::Stack(int newsize){
    this->size = newsize;
    this->where = -1;
    content = new T[this->size];
}
template<class T>
Stack<T>::Stack(const Stack &copy){
    this->size = copy.size;
   this->where = copy.where;
    for(int i = 0; i <size; i++){
        content[i] = copy.content[i];
    } 
}
template <class T>
bool Stack<T>::Push(T element){
    if (where+1 == this->size){
        return false; // this case the stack is full
    }
    content[++where] = element;
    return true;
}

template <class T>
bool Stack<T>::Pop(T &out){
    if(where == -1){
        cout<<"stack empty"<<endl;
        return false;
    }
    out = content[where--];
    return true;
}
template <class T>
T Stack<T>::back(){
if(where == -1){
    cout<<" empty stack"<<endl;
}
return content[where];

}

template <class T>
int Stack<T>::getNumberentries(){
    return where;
}

template <class T>
Stack<T>::~Stack(){
    delete [] content;
}
int main(){
    Stack<int>stint(10);
    int count = 0;
    for(int i = 0; i<10; i++){
        stint.Push(i);
        count++;

    }
    cout<<" number of entries "<<stint.getNumberentries()<<endl;
    cout<<"the element at the top"<<stint.back()<<endl;
    int store;
    for(int i = 0; i<10; i++){
        if(stint.Pop(store)){// this checks if the element  was popped and then stores in store and then can be printed
            cout<<store<<endl;
        }
    }
    return 0;
    
}
