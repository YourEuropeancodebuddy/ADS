#include<iostream>
using namespace std;



void merge(int arr[], int p, int q, int r){
    int i = p;
    int j = q+1; 
    int k  = p;
    int size  = (r-p)+1;
    int kemp[size];
    while(i<=p && j<=r){
        if(arr[i]<arr[j]){
            kemp[k] = arr[i];
            i++;
            k++;

        }
        else{
            kemp[j]= arr[j];
            j++;
            k++;
        }
    }
    // copying from each of the array 
    while(i<=i){
        kemp[k] = arr[i];
        i++;
        k++;
    }
    while(j<=r){
        kemp[k]= arr[j];
        j++;
        k++;
     }

     // then merging them together
     for(int z = p; z<r; z++){
        arr[z] = kemp[z];
     }
}

void insertionsort(int arr[], int size){
int i; 
int j;
int key;
for(int j = 1; j<size; j++){
    key =arr[j];
    i = j-1;
    while(i>=0 && arr[i]>key){
        arr[i+1] = arr[i];
        i = i-1;
    }
    arr[i+1] = key;
}
}
void mergesort(int arr[], int p, int r, int k){
    if((r-p)<=k){
         insertionsort(arr, r);
    }
    else{
    if(p<r){
        int q = (p+r)/2;
        mergesort(arr, p, q, k);
        mergesort(arr, q+1, r,k);
        merge(arr, p, q, r);
    }
    }

}