#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    typedef vector<int>vint;
    vint a, b, c;
    for(int i = 0; i<5; i++){
        a.push_back(i);
        cout<<i;
    }
    cout<<endl;
    for(int i = 2; i<8; i++){
        b.push_back(i);
        cout<<i;
    }
    cout<<endl;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    set_difference(a.begin(), a.end(), b.begin(), b.end(), inserter(c, c.begin()));
    vint::const_iterator pos;
    for(pos = c.begin(); pos!=c.end(); ++pos){
        cout<<*pos<<" ";
    }
}