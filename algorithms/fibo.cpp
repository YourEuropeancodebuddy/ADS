#include<iostream>
#include<numeric>
#include<algorithm>
using namespace std;

// computing the different ways to compute the finonnaci numbers 


int recursivenaive(int n){
    if(n<2){
        return n;
    }
    else{
        return recursivenaive (n-1)+ (n-2);
    }
}
// the top one has the time complexity of exponential 

int bottomup(int n){
    int arr[n];
    arr[0]= 0;
    arr[1] = 1;
    for(int i = 2; i<=n; i++){
        arr[i] = arr[i-1]+ arr[i-2];
    }
    return arr[n];
}
/// the top one has a linear time complexity 

int closeup(int n){
    double gold  = (1+sqrtl(5))/2.0;
    return (powl(gold, n))/sqrtl(5);
}

int matrixused(int n){
    int arr[2][2];
    arr[0][0] = 1;
    arr[0][1] = 1;
    arr[1][0] = 1;
    arr[0][1] = 0;
    int mult [2][1];
    mult[0][0] = 0;
    mult[1][0] = 1;
    for(int i = 0; i<n; i++){
        int temp1 = mult[0][0];
        int temp2 = mult[1][0];
        mult[0][0] = arr[0][0]*temp1 + arr[0][1]* temp2;
        mult[1][0] = arr[1][0] * temp1 + arr[1][1] * temp2;
    }
    return mult[0][0];
}