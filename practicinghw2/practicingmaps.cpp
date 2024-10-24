#include<iostream>
#include<map>
using namespace std;

int main(){
    map<string, int> secondmap;
    secondmap.insert({"first",1});
    secondmap["second"] = 2;
    secondmap.insert({" third",3});
    for(auto it = secondmap.begin(); it!=secondmap.end(); it++){
        cout<<" the key"<<it->first <<" the value: "<<it->second<<endl;
    }
    //finding a particular value 
    auto tobefound = secondmap.find("second");
    if(tobefound!=secondmap.end()){
        cout<<" found"<<tobefound->second<<endl;
    }

    //erasing an element
    secondmap.erase("first");
}