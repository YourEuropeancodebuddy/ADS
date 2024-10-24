#include<iostream>
class Linkedlist{
private:
    struct List{
        int data;
        List*link;
    };
    List*head;
public:
    Linkedlist(){
        head = NULL;
    }
    void push (int data){
        struct List*newel = new List;
        newel->data = data;
        newel->link = head;
        head= newel;

    }
    void reverse(){
        struct List * next = NULL;
        struct List *ptr = head;
        struct List * prev = NULL;
        while(ptr!= NULL){// checking that the list is not empty
        next = ptr->link;
        ptr->link = prev;
        prev = ptr;
        ptr = next;
        }
        head = prev;
    }
    
    

    void print(){
        struct List *ptr = head;
        while(ptr->link!= NULL){
            std::cout<<ptr->data<<std::endl;
            ptr = ptr->link;
        }
    }
};