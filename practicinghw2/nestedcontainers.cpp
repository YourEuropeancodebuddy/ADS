#include<iostream>
#include<vector>
#include<list>
using namespace std;

int main(){
  typedef list<int>lint;
  lint a, b;
  vector<list<int>>vint;
  for(int i = 0; i<5; i++){
    a.push_back(i);
  }
  for(int i = 5; i<10; i++){
    b.push_back(i);
  }
  vint.push_back(a);
  vint.push_back(b);
  for(auto el:vint){
    for(auto content:el){
        cout<< content<<" ";
    }
  }
}