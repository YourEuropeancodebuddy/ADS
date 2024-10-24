#include<iostream>

using namespace std;

void countsort(int arr[], int size, int exp){
    int output[size];
    int i;
    int count[10] = {0};
    for(i = 0; i<size;i++){
        count[(arr[i]/exp)%10]++; // this we increment the count because the number of times it appears at 
        // that position increases by one after that 

    // the next step is to find the number of elements greater or less than elements at count[i]
    }
    for(int j = 0; j< 10; j++){
        count[i] = count[i]+ count[i-1];
    }

    // then the next step is just to place the elements 
    for(int k = 0; k<size; k++){
        output[count[(arr[k]/exp)%10]-1] = arr[k]; // we have to minus one because in the count array
        // the index represent the actual position of the element but in actual fact 
        // in c++ the index starts from 0 so index  5 in count would be index for in array

        // the next step is to decremenent the index 

        count[(arr[k]/exp)%10] = count[(arr[k]/exp)%10]-1;
    }
    // then we have the sorted elements 
    for(int i = 0; i<size; i++){
        arr[i] = output[i];
    }

}

void radixsort(int arr[], int size){
    int max = arr[0];
    for(int i =1; i<size; i++){
        if(arr[i]>max){
            max= arr[i];
        }
    }
    for(int exp = 1; max/exp; exp*=10){
        countsort(arr, size, exp);
    }

}