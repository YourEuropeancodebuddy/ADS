#include<iostream>
using namespace std;
#include<vector>
#include<list>
int main(){
int size;
cin>>size;
cout<<"entering the vectors"<<endl;
vector<int>vint;
list<int>lint;
for(int i = 0; i<size; i++){
    vint.push_back(i);
}
for(int i = 0; i<size; i++){
    lint.push_back(vint[i]);
    cout<<"checking the order of the vector"<<endl;
    cout<<vint[i]<<endl;
}
lint.sort();

vector<int>::iterator vit;
list<int>::iterator lit;
for(lit = lint.end(); lit!=lint.begin();--lit){
    cout<<*lit<<endl;
}

}