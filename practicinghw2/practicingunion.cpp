#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    typedef vector<int>vint;
    vint a, b, c;
    a.push_back(1);
    b.push_back(3);
    a.push_back(5);
    set_union(a.begin(), a.end(), b.begin(), b.end(), inserter(c, c.begin()));
    vint::const_iterator pos;
    for(pos= c.begin();pos!=c.end(); ++pos){
        cout<<*pos<<" ";
    }

}