#include<iostream>
using namespace std;

void stableselectionsort(int arr[], int size){
    int i , j, min_index, key;
    for(int i = 0; i<size-1; i++){
        min_index = i;
        for(int j = i+1; j<size; j++){
            if(arr[min_index]>arr[j]){
                min_index = j;
            }
            key = arr[min_index];
        }
        for(int k = min_index; k>i;k--){
            arr[k] = arr[k-1];
        }
        arr[i] = key;
    }
}

void printing(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int myarray  [] ={1,2,43,523,243,22,0,2};
    int n =sizeof(myarray)/sizeof(myarray[0]);
    stableselectionsort(myarray, n);
    printing(myarray, n);
}