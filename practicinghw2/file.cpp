//file manipulation recap 

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream outputfile("output.txt");
    if(outputfile.is_open()){
        outputfile<<" I will buy Mercedes GLA 250"<<endl;
        outputfile<<"I wil pass ADS on first trial and will get good grades"<<endl;
    }
    else{
        cout<<"oops file could not open"<<endl;
        return 1;
    }
    outputfile.close();
    ifstream inputfile("inputfile.txt");
    string goals;
    if(inputfile.is_open()){
        while(getline(inputfile, goals)){
            cout<<" this is the content of the file"<<goals<<endl;
    
        }
    }
    else{
        cout<<"oops could not open"<<endl;
        return 1;
    }
    inputfile.close();
    
}