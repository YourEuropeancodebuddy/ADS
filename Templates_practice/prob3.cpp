#include<iostream>
using namespace std;

template <class T>
class Linkedlist{
private:
int size;
    struct List{
        int data;
        List*Prev;
        List *Next;
    };
public:
List*head;
// constructors
Linkedlist();
~Linkedlist();
//Linkedlist(int);
void Push_Front(T element);
T Front();
void Pop_Front();
void Push_Back(T element);
T Back();
void Pop_Back();
int numberofelements();
};

template<class T>
Linkedlist<T>::Linkedlist(){
head= NULL;
this->size = 0;
}

template<class T>
Linkedlist<T>::~Linkedlist(){
    if(head==NULL){
        cout<<" the linkedlist is empty"<<endl;
    }
    List* temp = new List;
    temp = head;
    head= head->Next;
    head->Prev  = NULL;
    delete temp;
    size--;
}

template<class T>
void Linkedlist<T>::Push_Front(T element){
    List *temp = new List;
    temp->data = element;
    temp->Next = head;
    temp->Prev = NULL;
    if(head!=NULL){
        head->Prev = temp;
    }
    head = temp;
    size++;
}

template< class T>
T Linkedlist<T>::Front(){
List *ptr = new List;
ptr = head;
if(ptr ==NULL){
    cout<<"oops empty"<<endl;
    return T();// what does this do
}
return ptr->data;
}

template<class T>
void Linkedlist<T>::Pop_Front(){
if(head ==NULL){
    cout<<'empty'<<endl;
}
List *temp = new List;
temp = head;
head = head->Next;
if(head!=NULL){
    head->Prev = NULL;
}
delete temp;
size--;
}

template<class T>
void Linkedlist<T>::Push_Back(T element){
    List * temp = new List;
    temp->data = element;
    temp->Next = NULL;
    List *ptr = head;
    if(head ==NULL){
        temp->Prev = NULL;
        head = temp;
        return;
    }
    while(ptr->Next!=NULL){
        ptr = ptr->Next;
    }
    ptr->Next = temp;
    temp->Prev = ptr;
    size++;
}

template< class T>
T Linkedlist<T>::Back(){
    List * ptr = new List;
    ptr = head;
    while(ptr->Next!=NULL){
        ptr = ptr->Next;
    }
    return ptr->data;
    
}

template <class T>
void Linkedlist<T>::Pop_Back(){
   List *temp = new List;
   temp = head;
   while(temp->Next !=NULL){
    temp = temp->Next;
   }
   if(temp->Prev!=NULL){
    temp->Prev->Next = NULL;
   }
   else{
    head = NULL;
   }
   delete temp;
   size--;
}

template<class T>
int Linkedlist<T>::numberofelements(){
    return size;
}

int main(){
    Linkedlist<int> object;
    for(int i = 0; i<10; i++){
        object.Push_Front(i);
    }

    cout<<object.Back()<<endl;
    cout<<object.Front()<<endl;
    object.Pop_Back();
    object.Pop_Front();
    cout<<object.numberofelements()<<endl;
    
}