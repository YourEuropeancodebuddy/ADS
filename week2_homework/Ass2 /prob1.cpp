#include<list>
#include<iostream>
#include<fstream>
#include<algorithm>
int main(){
std::list<int> A;
std::list<int> B;
int n;
while(std::cin>>n){
    if(n <= 0){
        break;
    }
    A.push_back(n);
    B.push_front(n);
    }
std::cout<<" printing list A separated by commans"<<std::endl;
    for( auto it = A.begin(); it!= A.end(); it++){
        if( it != A.begin()){ //
            std::cout<< ",";
        }
        std::cout<< *it;
    }
std::cout<<std::endl;
std::cout<<"printing the content of B into an external file"<<std::endl;
std::ofstream output;
output.open("list b.txt", std::ios::out);
if(output.is_open()){
    for(auto it = B.begin();it != B.end(); it++){
        if(it != A.begin()){
            output<< " ";
            }
        output<< *it;
        }
    }
    else{
        std::cout<< " oops file failed to open"<<std::endl;
    }
    output.close();
    std::cout<<std::endl;
    std::cout<<"printing list A in reversed order"<<std::endl;
    for(auto it  = A.rbegin(); it!=A.rend(); it++){
        if(it!=A.rbegin()){
            std::cout<<",";
        }
        std::cout<<*it;
    }
    std::cout<<std::endl;
    std::cout<<"printing list B in reversed order"<<std::endl;
    for(auto it  = B.rbegin(); it!=B.rend(); it++){
        if(it!=B.rbegin()){
            std::cout<<",";
        }
        std::cout<<*it;
    }
    std::cout<<std::endl;

std::cout<<" printing an unified list"<<std::endl;
std::list<int>unified; // where the unified list of integers will be
std::set_union(A.begin (), A.end(), B.begin(), B.end(), back_inserter(unified));
for(auto el: unified){
    std::cout<<el<<" ";
}
}

