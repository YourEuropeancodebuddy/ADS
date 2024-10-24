#include<iostream>
using namespace std;
template<class T>
class Breastcancer{
private:
    int top;
    int pictures;
    string name;
    T* print;

public:
    Breastcancer();
    Breastcancer(int, int, string );
    Breastcancer(const Breastcancer&); 
    ~Breastcancer();
    bool picturesinserted( const Breastcancer <T> &); // counts the number of picture inserted 
    void forprint( );// access the private data and then prints the information whether cancer detected or not
    int result ( );// this takes the analysis and return the analysis coefficients in an array 
    // with the most recent one being at index 0
    bool add( T);
};

template<class T>
Breastcancer<T>::Breastcancer(){ // default constructor
    int pictures = 10;
    int top = -1;
    T*print = new int[pictures];
}

template<class T>
Breastcancer<T>::Breastcancer( int top, int pictures,string name){
    this ->name = name;
    this->top = -1;
    this->pictures = pictures;
    print = new int[pictures];

}

template<class T>
Breastcancer<T>::Breastcancer( const Breastcancer& copy){
    this->name = copy.name;
    this->top = copy.top;
    this->pictures = copy.pictures;
    print = new int[pictures];
    for (int i = 0; i<pictures; i++){
        this->print [i] = copy.print[i];
}
}
template <class T>
bool Breastcancer<T>::add( T newobj){
    if (top +1 < pictures){
        print[++top] = newobj;
        return true;
    }

    return false;
}
template< class T>
bool Breastcancer <T>::picturesinserted( const Breastcancer <T> & other ){
    if( other.mypictures >= 10){
        for (int i = 0; i< other.pictures ; i++){
            print[i] = other.print[i];
            cout<<" input at least 10 pictures"<<endl;
        }
        top  = other.top;
        return true;
}
else{
cout<<" oops you don't have enough pictures to use our model"<<endl;
return false;
}
}
template< class T>
void Breastcancer<T>::forprint(){
    for (int i = 0; i<pictures; i++){
        cout<<print[i]<<endl;
    }
}

template <class T>
int Breastcancer<T>::result(){
    if(top<10){
        cout<<" oops! You don't have enough picture to use our model"<<endl;
        return -1;
    }
    for(int i = 0; i<pictures;i++){
        if (( print[i] /2.33)<0.122){
        cout<< " the ratio of redblood cells to white is "<< print[i]<<endl;
        cout<<" all looks good  for now. See you next time"<<endl;
        }

}

}

template <class T>
Breastcancer<T>::~Breastcancer(){
    delete [] print;
}

int main(){
    Breastcancer<int>mypictures;
    int newtobeadded = 10;
    mypictures.add(newtobeadded);
    mypictures.forprint();

return 0;
}