#include<iostream>
using namespace std;
class Queuelinked{
private:
    struct Node{
        int data;
        Node *link;
    };
    Node *front;
    Node *rear;
public:
    Queuelinked(){
        this->front = NULL;
        this->rear= NULL;

    }
    void enqueue(int added){
        Node * newel = new Node;
        newel ->data = added;
        if(this->rear == NULL){
            this->front= this->rear= newel;
            this->rear->link = front;
        }
        else{
             this->rear->link = newel;
             this-> rear = newel;
             this->rear->link = front;

        }

    }

    int dequeue(){
        if(this->front == NULL){
            cout<<"queue is empty"<<endl;
        }
        int returned = this->front ->data;
        if(this->front == this->rear){
            this->front = this->rear = NULL;
        }
        else{
            Node *temp = this->front;
            this->front = this->front->link;
            this->rear->link = this->front;
            delete temp;
        }
        return returned;
    }
    bool isEmpty(){
        return this->rear==NULL;
    }
/*
    void display(){
        Node *ptr = new Node;
        ptr = this->front;
        if(this->front ==NULL){
            cout<<" queue is empty"<<endl;
        }
        else{
            while(ptr!=rear->link){
                cout<<ptr->data<<endl;
            }
        }
    }
    */
};


int main(){
    Queuelinked object;
    for(int i = 0; i<5; i++){
        object.enqueue(i);
    }
    while(!object.isEmpty()){
        cout<<object.dequeue()<<endl;
    }
    return 0;
}