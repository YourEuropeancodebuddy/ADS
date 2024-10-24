#include<iostream>
#include<set>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    set<int>loto;
   srand(static_cast<unsigned int>(time(NULL)));
   for(int i = 0; i<6; i++){
    int randomnumber = rand()%49+1;
    loto.insert(randomnumber);
   }
   for(auto el:loto){
    cout<<el<<" ";
   }

}