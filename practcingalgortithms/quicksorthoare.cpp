#include<iostream>

using namespace std;

int partitionthoare(int arr[], int low, int high){
    int pivot = arr[low];
    int p = low-1; //this is crucial  because we don't want to assume that lowest element is the 
    // pivot but rather we find it as we go dynamically and sort the array at the same time. 
    int q = high+1; // this is crucial so that we don't skip any of the numbers because right 
    // when we find an element greater than the pivot on the lew we start decrementint q
    while(true){
        do{
            p++; // compares the first element with its self 
        }while (arr[p]<pivot);
        do{
            q--;
        }while(arr[q]>pivot);
        if(p>=q)
            return q;
        
        swap(arr[p], arr[q]);
    }
}


void quicksorthoare(int arr[], int low, int high){
    if(low<high){
        int pi = partitionthoare(arr, low, high);
        quicksorthoare(arr, low, pi);
        quicksorthoare(arr,pi+1, high);
    }
}


int main(){
    int trial [] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(trial)/sizeof(trial[0]);
    quicksorthoare(trial,0,n-1);
    for(int i =0; i<n; i++){
        cout<<trial[i]<<endl;
    }
    }
    