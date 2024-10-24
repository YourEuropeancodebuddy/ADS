#include<iostream>
using namespace std;


struct doublyNode{
    int data;
    doublyNode *next;
    doublyNode *previous;
};


void printing(doublyNode *head){
    doublyNode *ptr = NULL;
    if(head==NULL){
        cout<<"oops the list is empty"<<endl;
    }
    ptr = head;
    while(ptr!=NULL){
        cout<<ptr->data <<endl;
        ptr = ptr->next;
    }
}

void insertbeginning(struct doublyNode** head, int data){
    struct doublyNode* temp = new doublyNode;
    temp->data = data;
    temp->next = NULL;
    temp->previous = NULL;
    if(*head==NULL){
        *head = temp;
    }
    (*head)->previous = temp;
    temp->next = *head;
    *head = temp;
}


int main(){
    doublyNode *head = new doublyNode;
    head->data = 10;
    head->previous =NULL;
    head->next = NULL;

    
    doublyNode * current = new doublyNode;
    current->data = 34;
    current->previous = head;
    head->next = current;
    current->next = NULL;
    
    current = new doublyNode;
    current->data = 12;
    current->previous = head->next;
    head->next->next = current;
    current->next = NULL;
    insertbeginning(&head, 11);
    printing(head);
    

}