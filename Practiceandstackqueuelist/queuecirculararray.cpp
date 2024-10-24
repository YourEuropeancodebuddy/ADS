#include<iostream>

// I will try using push to addd data;
using namespace std;
class Queuearray{
private:
    int front;
    int rear;
    int * myarray;
    int size;
public:
    // let's start with a default to initiate everything;
    Queuearray(){
        this->size = 0;
        this->front = -1;
        this->rear = -1;
        this->myarray = new int[size];
    }
    Queuearray(int newsize){
        this->size = newsize;
        this->front = -1;
        this->rear = -1;
        this->myarray = new int[size];
    }
    void enqueueuarray(int data){
        try{
            if(this->rear == size-1){
                throw" overthrow there is no space";
                exit(0);
            }
            if(this->front ==-1 && this->rear == -1){
                this->front++;
            }
            myarray[++this->rear] = data; 
        }
        catch( char const *e){
           std::cerr<<e<<std::endl;
        }
    }

    int dequeuearray(){
        try{
        if(this->rear == -1 && this->front == -1){
            throw"error underflow";
            exit(0);
        }
        int temp = myarray[front];
        if(this->rear == this->front){
            this->front = this->rear = -1;
            return temp;
        }
        else{
        front++;
        return temp;
        }
    }
    catch(const char *e){
        std::cerr<<e<<std::endl;
    }
}

    bool IsEmpty(){
        if(this->front ==-1 && this->rear == -1){
            return true;
        }
        else{
            return false;
        }
    }

    bool full(){
        if(this->rear == size-1){
            return true;
        }
        else{
            return false;
        }
    }

    int peek(){
        if(this->front == -1){
            return -1;
        }
        else{
            return myarray[front];
        }
    }
};


int main(){
    Queuearray object (10);
    for (int i = 0; i<10; i++){
       object.enqueueuarray(i);
    }
    while(!object.IsEmpty()){
        cout<<object.dequeuearray()<<endl;
    }
}