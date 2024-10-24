#include <iostream>
#include<map>
#include<sstream>
#include<fstream>
#include<string>
using namespace std;
int main(){
map <string, string > birthdays;
ifstream inputfile;
inputfile.open("data.txt", ios::in);
if(!inputfile.is_open()){
    cout<<" oops file failed to open try again" << endl;
    return -1;
}
string data;
while(getline(inputfile, data)){
    istringstream iss(data);
    string firstname;
    string lastname;
    string date;
    string fullname = firstname + " " + lastname;
    iss>>firstname>>lastname>>date;
    birthdays[fullname] = date;
}

inputfile.close();
string querry;
cout<< " enter the first and lastname to find the birthdate " <<endl;
getline(cin, querry);
bool found =false;
for(const auto & pair: birthdays){
    if (pair.first.find(querry) == 0){
        cout <<" the name" << pair.first << " has the birthday on " << pair.second <<endl;
        found = true;
        break;
    }
}
    if(!found){
        cout << " oops match not found " <<endl;
        cout<<endl;
}

}