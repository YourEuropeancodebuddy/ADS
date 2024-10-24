#include<iostream>
using namespace std;
void selectionsort(int arr[], int size){
    int i, j, smallest, temp;
    for(i = 0; i<size-1; i++){
        smallest = i;
        for(j = i+1; j<size; j++){
            if(arr[smallest]>arr[j]){
                smallest = j;
            }
        }
        if(smallest!=i){
        /*temp = arr[i];
        arr[i] = arr[smallest];
        arr[smallest] = temp;
        */
        // or just do this 
        swap(arr[smallest], arr[i]);
 
        }
    }
}

void printing(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int myarray  [] ={1,2,43,523,243,22,0};
    int n =sizeof(myarray)/sizeof(myarray[0]);
    selectionsort(myarray, n);
    printing(myarray, n);
}