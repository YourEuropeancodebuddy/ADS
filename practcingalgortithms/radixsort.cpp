#include<iostream>
using namespace std;

int getmax(int arr[], int size){
    int max = arr[0];
    for(int i = 1; i<size; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}
void countsort(int arr[], int size, int exp){
    int output[size];
    int count[10] ={0};
    for(int i = 0; i <size; i++){
        count[(arr[i]/exp)%10]++;
    }
    for(int j = 1; j<10; j++){
        count[j] = count[j] +count[j-1];
    }
    for(int k = (size-1); k>=0;k--){
        output[count[(arr[k]/exp)%10]-1] = arr[k];
        count[(arr[k]/exp)%10] = count[(arr[k]/exp)%10] -1;

    }
    for(int i = 0; i<size; i++){
        arr[i] = output[i];
    }
}

void radixsort(int arr[], int size){
    int max = getmax(arr,size);
    for(int exp = 1; max/exp>0;exp*=10 ){
        countsort(arr, size, exp);
    }

}

int main(){
    int arr [] = {123,4232,1,32,8,93,123};
    radixsort(arr,7);
    for (int i = 0; i<7; i++){
        cout<<arr[i] <<endl;
    }
}