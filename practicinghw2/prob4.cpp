#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<string>stringv;
    string input;
    while(cin>>input){
        if(input=="END"){
            break;
        }
        else{
            stringv.push_back(input);
        }
    }
    //pringing using the overloaded []
    bool first = true;
    for(int i = 0; i<stringv.size(); i++){
        if(!first){
            cout<<" ";
        }
        cout<<stringv[i];
        first = false;
    }

cout<<endl;
bool first = true;
    // using the iterators
    for(auto it = stringv.begin(); it<stringv.end(); it++){
        if(!first){
            cout<<", ";
        }
        cout<<*it;
        first = false;
    }
}