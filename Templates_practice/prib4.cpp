#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<string>stringv;
    string input;
    int count = 0;
    while(cin>>input &&input!="END"){
        stringv.push_back(input);
        count++;
    }
    for (int i = 0; i<count; i++){
        cout<<"printing normally"<<endl;
        cout<<stringv[i]<<endl;
    }
    vector<string>::iterator stringit;
    for(stringit= stringv.begin(); stringit!=stringv.end();  ++stringit){
        cout<<*stringit<<", ";
    }
}