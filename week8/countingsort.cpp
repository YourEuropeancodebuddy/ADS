#include<iostream>
using namespace std;

void countingsort( int arr[], int size){
    int range = arr[0];
    for(int i = 1; i<size; i++){
        if(arr[0]<arr[i]){
            range = arr[i];
        }
    }
    range = range +1;
    int temp[range];
    int output[size];
    // now initialize the temp with zeros
    for (int j = 0;  j<range; j++){
        temp[j] = 0;
    }
    // we count the number of times each element appears 
    for(int i = 0; i<size; i++){
        temp[arr[i]] = temp[arr[i]] +1;
    }
    //  we count the number of element greater or equal to the elements 
    for (int k = 1; k<range; k++){
        temp[k] = temp[k]+ temp[k-1];
    }

    for (int l = (size-1); l>=0; l--){
        output[temp[arr[l]]] = arr[l];
        temp[arr[l]] = temp[arr[l]]-1;
     }

     for (int i = 0; i <size; i++){
        arr[i] = output[i+1]; // this is cruciall because when we are the number of elements greater
        // and storing them in temp we start from the second index 
     }
}

int main(){
    int myarray [] = {9,1,6,7,6,2,1};
    countingsort(myarray,7 );
    for (int i = 0; i<7;i++){
        cout<<myarray[i] <<endl;
    }
}