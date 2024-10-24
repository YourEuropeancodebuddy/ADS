#include<iostream>
#include<set>
using namespace std;

int main(){
    set<string>first;
    set<string>second;
    int count = 0;
    string input;
    while(count<5){
        cin>>input;
        first.insert(input);
        count++;
    }
    string group;
    int counting = 0;
    while(counting<5){
        cin>>group;
        first.insert(group);
        counting++;
    }
    set<string>unified;
    set_union(first.begin(), first.end(), second.begin(), second.end(), inserter(unified, unified.begin() ));

    for(auto ele:unified){
        cout<<ele<<" ";
    }



}