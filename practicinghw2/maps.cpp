#include<iostream>
#include<fstream>
#include<map>
#include<sstream>

using namespace std;

int main(){
    ifstream inputfile("data.txt");
    if(!inputfile.is_open()){
        cout<<" error could not open file"<<endl;
        return -1;
    }
    map<string, string>privacy;
    string content;
    while(getline(inputfile, content)){
        istringstream iss(content);
        string firstname, secondname, date;
        iss>>firstname>>secondname>>date;
        string fullname = firstname + " "+ secondname;
        privacy[fullname] = date;
    }
    inputfile.close();
    // finding an element from the file 
    
    cout<<" enter the first name for the birthday to be found: "<<endl;
    string querry;
    cin>>querry;
    bool found = false;
    for(const auto &el:privacy){
        if(el.first.find(querry)==0){
            cout<<" the full name is "<< el.first<<endl;
            cout<<" the data is "<< el.second<<endl;
            found = true; 
        }
    }

    if(!found){
        cout<<"oops not found"<<endl;
    }

    return 0;
}