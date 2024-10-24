#include<iostream>
using namespace std;


void merge(int arr[], int p, int q, int r){
int i = p;
int j = q+1;
int k = p;
int size = (r-p)+1;
int temp[size];
while(i<=q && j<=r){
    if(arr[i]<=arr[j]){
        temp[k] = arr[i];
        i++;
        k++;
    }
    else{
        temp[k] = arr[j];
        j++;
        k++;
    }
}
while(i<=q){
    temp[k] =arr[i];
    i++;
    k++;

}
while(j<=r){
    temp[k] = arr[j];
    j++;
    k++;
}
for(int z = p; z<=r; z++){
    arr[z]= temp[z];
}
}
void mergesort(int arr[], int p, int r){
    if(p<r){
        int q = (p+r)/2;
        mergesort(arr,p, q);
        mergesort(arr,q+1, r);
        merge(arr, p, q,r);
    }
}

void printing(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int myarray [] = {12,342,42,21,10,4,100};
    int length = sizeof(myarray)/sizeof(myarray[0]);
    mergesort(myarray,0, length-1);
    printing(myarray, length);
}