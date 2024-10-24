#include<iostream>
using namespace std;

void maxheapify(int arr[], int size, int root){
    int left = 2 * root +1;
    int right = 2 * root +2;
    int largest;
    if(left<=size&& arr[left]>arr[root]){
        largest = left;
    }
    else{
        largest = root;
    }

    if(right<=size&&  arr[right]>arr[root]){
        largest = right;
    }
    if(largest !=root){
        int temp = arr[root];
        arr[root] = arr[largest];
        arr[largest] = temp;
        maxheapify(arr, size, largest);
    }
}

void buildmaxheap(int arr[], int size){
    for(int i = size/2; i>=0; i--){
        maxheapify(arr, size,i);
    }
}


void heapsort(int arr[], int size){
    buildmaxheap(arr, size);
    for(int i = size; size>=1; i--){
         int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        maxheapify(arr, size,0);
    
    }
}