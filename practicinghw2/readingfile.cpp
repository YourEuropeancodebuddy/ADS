#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream inputfile("input.txt");
    if(!inputfile.is_open()){
        cout<<"error"<<endl;
    }
    string reading;
    while(getline(inputfile,reading )){
        cout<<reading<<endl;
    }
    inputfile.close();
}