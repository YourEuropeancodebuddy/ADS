#include<iostream>
using namespace std;

template<typename T>
class Stack{
private:
    struct StackNode{
        T data;
        StackNode *next;
    };
    StackNode *top;
    int size;
    int current_size;
public:
    Stack(){
        this->size = -1;
        this->current_size = 0;
        this->top = NULL;
    }
    Stack(int newsize){
        this->size = newsize;
        this->current_size = 0;
        this->top = 0;
    }

    void push (T data){
        try{
            if(this->current_size == this->size){
                throw" overflow stack is full";
                exit(0);
            }
            StackNode * newel = new StackNode;
            newel->data = data;
            if(this->top == NULL){
                this->top = newel;
                newel->next = NULL;
                this->current_size++;
                return;
            }
            else{
                newel->next = top;
                this->top = newel;
                this->current_size++;

            }
        }
        catch(char const *e){
            cerr<<e<<endl;
        }
    }
    T pop(){
        try{
            if(this->current_size == 0){
                throw" underflow stack is empty"; 
                exit(0); 

            }

        StackNode *temp = this->top;
        T data = temp->data;
        top = temp->next;
        delete temp;
        return data;
        this->current_size--;
        }
        catch(char const *e){
        cerr<<e<<endl;
    }
}

    bool isEmpty(){
        if(this->current_size ==0){
            return true;
        }
        else{
            return false;
        }
    }
};
