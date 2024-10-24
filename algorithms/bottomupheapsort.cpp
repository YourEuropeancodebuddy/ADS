#include<iostream>
using namespace std;

void maxheapify(int arr[], int size, int root){
    int left = 2 * root +1;
    int right = 2 * root +2;
    int largest ;
    if(left<=size && arr[left]>arr[root]){
        largest = left;
    }
    else{
        largest = root;
    }
    if(right<=size && arr[right]>arr[root]){
        largest = right;
    }
    if(largest != root){
        int temp = arr[root];
        arr[root] = arr[largest];
        arr[largest] = temp;
        maxheapify(arr, size, largest);
    }
}

void buildmaxheap(int arr[], int size){
    for(int i = size/2; i>=0; i--){
        maxheapify(arr, size, i);
    }
}
int bottomup(int arr[], int size, int root){
    int index = root;
    int left = 2 *root +1;
    int right = 2 * root +2;

    if(left>=size){
        return root ;// means there is no child present as after decrement it gets removed 
    }
    if(right>=size){ // means we have a left child
        int temp = arr[root];
        arr[root]= arr[left];
        arr[left] = temp;
        return left;
    }

    if(arr[left]>arr[right]){
        index = left;
    }
    else{
        index = right;
    }
    int temp2 = arr[root];
    arr[root] = arr[index];
    arr[index] = temp2;
    return (arr, size, index);
}

int checkup(int arr[], int size, int root){
    int parent = (root -1)/2;
    if(arr[parent]<arr[root]){
        int temp2 = arr[root];
        arr[root] = arr[parent];
        arr[parent] = temp2;
        checkup(arr, size,root );
    }
}
void heapsort(int arr[], int size){
    buildmaxheap(arr, size);
    for(int i = size;  i>=1; i--){
        int temp = arr[0];
        arr[0] = arr[i];
        arr[0]= temp;
        size--;
        int position = bottomup(arr, size, 0);
        checkup(arr, size, position);
    }
}