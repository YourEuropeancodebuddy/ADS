#include<list>
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    list<int>lint1, lint2;
    int input;
    while(cin>>input){
        if(input<=0){
            break;
        }
        else{
            lint1.push_back(input);
            lint2.push_front(input);      
            
              }
    }
    for(auto el:lint1){
        cout<<el<<" ";
    }
    ofstream outputfile("output.txt");
    if(!outputfile.is_open()){
        cout<<"oops failed to open"<<endl;
        return 1;
    }
    else{
        for(auto it = lint2.begin(); it!=lint2.end(); ++it){
            if(it!=lint2.begin()){
                outputfile<<", ";
            }
            outputfile<<*it;
        }
    }
    outputfile.close();
    cout<<endl;

    // moving the first elements of the list to the end for both lists 
    cout<<" moving the first 2 elements"<<endl;
    for(int i = 0; i<2; i++){
        int front = lint1.front();
        lint1.pop_front();
        lint1.push_back(front);
    }
    for(int i = 0; i<2; i++){
        int front = lint2.front();
        lint2.pop_front();
        lint2.push_back(front);
    }
    cout<<"first list after elements swap"<<endl;
    for(auto it = lint1.begin(); it!=lint1.end(); it++){
        if(it!=lint1.begin()){
            cout<<",";
        }
        cout<<*it;
    }
    cout<<" second list after elements swap"<<endl;
    for(auto it = lint2.begin(); it!=lint2.end(); it++){
        if(it!=lint2.begin()){
            cout<<",";
        }
        cout<<*it;
    }
    cout<<endl;
    // merging the two lists into list1
    cout<<"merging the two lists into list 1 "<<endl;
    lint1.insert(lint1.end(), lint2.begin(), lint2.end());
    for(auto it  = lint1.begin(); it!=lint1.end(); it++){
        if(it!=lint1.begin()){
            cout<<" ";
        }
        cout<<*it;
    }
    return 0;
}