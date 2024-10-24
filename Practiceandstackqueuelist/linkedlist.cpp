#include<iostream>
using namespace std;
struct linkedlist{
    int data;
    linkedlist*link;
};

void countingnodes(struct linkedlist*head){
    int count = 0;
    if(head==NULL){
        cout<<" the list is empty" <<endl;
    }
    struct linkedlist*ptr = NULL;
    ptr = head;
    while(ptr!=NULL){
        count++; 
        ptr = ptr->link;
    }
    cout<<count<<endl;
}

void add_end(struct linkedlist*head, int data){
    struct linkedlist*temp;
    struct linkedlist*ptr;
    temp = new linkedlist;
    temp->data = data;
    if(head==NULL){
        head= temp;
    }
    ptr = head;
    while(ptr->link!=NULL){
        ptr = ptr->link;
    }
    ptr->link = temp;
    temp->link = NULL;


}


/*
struct linkedlist *better (struct linkedlist *ptr, int data){
struct linkedlist*temp; 
temp = new struct linkedlist;
temp->data = data;
temp->link = NULL;
ptr->link =temp;
return temp;
}
*/
struct linkedlist* addbeginning(struct linkedlist*head, int data){
    struct linkedlist *ptr = new linkedlist;
    ptr->data = data;
    ptr->link= head;
    head = ptr;
    return head;

}
int main(){
    struct linkedlist*head = new linkedlist;
    head->data = 23;
    head->link = NULL;
    struct linkedlist*ptr = head;
    //ptr = better(head,10);
    struct linkedlist*current = new linkedlist;
    current->data = 220;
    head->link = current;
    current->link = NULL;
    
    current = new linkedlist;
    current->data = 12;
    head->link->link = current;
    current->link = NULL;
    int data = 33;
    add_end(head, data);
    countingnodes(head);
    while(head!= NULL){
        cout<<head->data<<endl;
        head = head->link;
    }

    // addbeginning 
    head = addbeginning(head, data);
}