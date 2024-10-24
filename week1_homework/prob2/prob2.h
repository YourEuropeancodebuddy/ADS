#ifndef STACK_H
#define STACK_H
template <typename T>
class Stack {
private:
    T* data; // array 
    int capacity; // length of the stack
    int top; // index to keep the top element

public:
    Stack(); // Default constructor
    Stack(int size); // constructor for the new size
    Stack(const Stack& other); // Copy constructor
    ~Stack(); // Destructor

    bool push(T element); // for pusing an element onto the stack
    bool pop(T& out); // for poping an element from the stack
    T back(); // Returning the element at the top of the stack
    int getNumEntries(); // this gets the number of entries in the stack
};

template <typename T>
Stack<T>::Stack(){
    capacity = 10;
    top = -1;
    data = new T[capacity];
}

template <typename T>
Stack<T>::Stack(int size) : capacity(size), top(-1) {
    data = new T[capacity];
}

template <typename T>
Stack<T>::Stack(const Stack& other) : capacity(other.capacity), top(other.top) {
    data = new T[capacity];
    for (int i = 0; i <= top; ++i) {
        data[i] = other.data[i];
    }
}

template <typename T>
Stack<T>::~Stack() {
    delete[] data;
}

template <typename T>
bool Stack<T>::push(T element) {
    if (top + 1 < capacity) {
        data[++top] = element;
        return true;
    }
    return false; // Stack is full
}

template <typename T>
bool Stack<T>::pop(T& out) {
    if (top >= 0) {
        out = data[top--];
        return true;
    }
    return false; // Stack is empty
}

template <typename T>
T Stack<T>::back() {
    return data[top];
}

template <typename T>
int Stack<T>::getNumEntries() {
    return top + 1;
}
// Include the implementation file

#endif // STACK_H
