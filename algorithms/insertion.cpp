#include<iostream>
using namespace std;

void insertionsort(int arr[], int size){
    int i, j, key;
    for(j = 1; j<size;j++){
        key = arr[j] ;
        i = j-1;
        while((i>=0) &&(arr[i]>key)){
            arr[i+1]= arr[i];
            i = i-1;
        }
        arr[i+1] = key;
    }

}

void printing (int arr[], int size){
    int i;
     for(i = 0; i<size; i++){
        cout<<arr[i]<<" ";
     }
}
int main(){
    int myarray [] = {2,3,0,1, 23, 12,4};
    int n = sizeof(myarray)/sizeof(myarray[0]);
    insertionsort(myarray, n);
    printing(myarray, n);

}