#include<iostream>
using namespace std;

int parti_tion(int arr[], int p, int q){
    int x = arr[p];
    int i = p;
    for(int j = p+1; j<q; j++){
        if(arr[j]<=x){
            i = i+1;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[p], arr[i]);
    return i;

}

void quick_sort(int arr[], int p, int r){
    if(p<r){
        int q =parti_tion(arr, p, r);
        quick_sort(arr, p, q-1);
        quick_sort(arr, q+1, r);
    }
}

int main(){
    int arr[] = {1,23,9,45,12,3};
    quick_sort(arr,1,6);
    for(int i =0; i<6; i++){
        cout<<arr[i]<<endl;
    }
}