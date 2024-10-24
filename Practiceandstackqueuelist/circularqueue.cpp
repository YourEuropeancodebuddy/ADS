#include<iostream>
using namespace std;

class Circularqueue{
private:
    int front;
    int rear;
    int * nums;
    int size;
public:
    Circularqueue(){  // default constructor
    this->front = -1;
    this->rear = -1;
    this->size = 0;
    this->nums = new int[size];
    }
    Circularqueue(int newsize){
        this->size = newsize;
        this->front = -1;
        this->rear = -1;
        this->nums = new int [this->size];
    }
    void resize(){
        int *temparr = new int [this->size* 2];
        int i = 0;
        int j = this->front;
        while((j+ 1)% this->size != front){
            j = (j+1)%this->size;
            temparr[i] = nums[j];
        }
        this->front = 0;
        this->rear = this->size -1;
        nums = temparr;
        }
    bool isEmpty(){
        return this->front ==-1;
    }
    bool isFull(){
        return ((rear+1)%this->size ==front);
    }
    void enQueue( int data){
        if(isFull()){
            resize();
        }
        if(isEmpty()){
            front++;
        }
        rear = (rear+1) %this->size;
        nums[rear] = data;
    }

    int dequeue(){
        try{
            if(isEmpty()){
                throw" underflow";
            }
            if(this->front == this->rear){
                int temp = nums[this->front];
                this->front = -1;
                return temp;

            }
            else{
                int temp = nums [this->front];
                this->front = this->front +1;
                return temp;
            }
        }
        catch(const char *e){
            cerr<<e<<endl;
        }
       return 0;  
    }

    };


int main(){
    Circularqueue object(10);
    for(int i = 0; i<20; i++){
        cout<<"first"<<endl;
        object.enQueue(i);
    }
    while(!object.isEmpty()){
        cout<<object.dequeue()<<endl;
    }

}