#include<iostream>
#include<ctime>
#include<set>
using namespace std;
int main(){
    int count = 0;
    int randomnumber;
    set<int> myset;
    srand(static_cast<unsigned int>(time(0)));
    while(count<6){
        count++;
        randomnumber = rand ()%49+1;
        myset.insert(randomnumber);
    }
    for(auto it = myset.begin(); it!= myset.end(); it++){
        cout<< *it << " ";
    }
}