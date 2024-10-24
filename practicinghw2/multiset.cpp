#include<iostream>
#include<set>
using namespace std;

struct Report{
string student;
int grade;
bool operator<(const Report &other) const{
    if(grade==other.grade){
        return student<other.student;
    }
    return grade<other.grade;
}
};

int main(){
    multiset<Report>classing;
    classing.insert({" Nahimana", 8});
    classing.insert({"Chris Abelard", 7});
    classing.insert({"Addy", 6});
    for(auto const &el:classing){
        cout<<" the names"<<el.student<<" the grades"<<el.grade<<endl;
    }
}