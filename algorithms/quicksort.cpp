#include<iostream>
using namespace std;

struct Linkedlist{
    int data;
    Linkedlist*next;
    Linkedlist*prev;
};

void addingend(Linkedlist*&head, int data){
    Linkedlist*newnode = new Linkedlist;
    newnode->data = data;
    newnode->next = NULL;
    Linkedlist*ptr = head;
    if(head==NULL){
        head=newnode;
        newnode->prev = NULL;
    }
    while(ptr->next !=NULL){
        ptr = ptr->next;
    }
    ptr->next = newnode;
    newnode->prev = ptr;
    
}
  
int main(){
    Linkedlist*head = new Linkedlist;
    head->data = 12;
    head->next = NULL;
    head->prev = NULL;
    addingend(head, 23);
    Linkedlist*traverse = head;
    while(traverse!= NULL){
        cout<< traverse->data<< " ";
        traverse = traverse->next;
    }

}