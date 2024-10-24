#include<iostream>
#include<time.h>
#include<cstdlib>
#include<random>
using namespace std;

int parti_tion(int arr[], int p, int q){
    int x = arr[p];
    int i = p;
    for(int j = p+1; j<q; j++){
        if (arr[j]<x){
            i = i+1;
            swap(arr[j],arr[i]);
        }
    }
    swap(arr[p], arr[i]);
    return i;
}

int random_partion(int arr[], int p, int q){
    srand(time(NULL));
    int random = p + rand()%(q-p);
    swap(arr[p], arr[random]);
    return parti_tion(arr, p, q);
}


