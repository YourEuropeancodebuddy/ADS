#include<iostream>

using namespace std;

class Linkedlist{
private:
    struct List{
        int data;
        List *link;
    };
    List *head;
public:
Linkedlist(){
    this->head = NULL;
}

void push(int newdata){
    List *newel = new List;
    newel->data = newdata;
    newel->link= head;
    head = newel;
}

void reversing(){
    List * after = NULL;
    List *before = NULL;
    List *cursor = head;
    while(cursor!= NULL){
        after = cursor->link;
        cursor->link = before;
        before = cursor;
        cursor =after;
    }
    head = before;
}

void printing(){
    List * temp;
    for (temp = this->head; temp!=NULL; temp = temp->link){
        cout<<temp->data<<endl;
    }
}
};