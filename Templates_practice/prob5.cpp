#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<string>vstring;
    string input;
    while(getline(cin, input)){
        if(input=="END"){
            break;
    }
    vstring.push_back(input);
    }
    for(int i = 0; i<vstring.size(); i++){
        cout<<vstring[i]<<endl;
    }
    cout<<endl;
    for(auto it = vstring.begin(); it!= vstring.end(); it++){
        cout<<*it<<", ";
    }
    cout<<endl;
    for(auto it = vstring.end();it>=vstring.begin(); --it){
        cout<<*it<<" ";
    }
}

// remember rbegin and rend can be used to reverse containers instead of implementing them logically 
