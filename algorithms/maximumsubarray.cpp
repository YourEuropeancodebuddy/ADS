#include<iostream>
using namespace std;

int max(int a, int b){
    return (a>b)? a:b;
}
int max(int a, int b, int c){
    return max(max(a,b), c);
}

int maxcrossubarray(int arr[], int l, int m, int h){
    int left_sum = INT_MIN;
    int sum = 0; 
    for(int i = m; i>=l; i--){
        sum = sum+ arr[i];
        if(sum>left_sum){
            left_sum = sum;
        }
    }
    int right_sum = INT_MIN;
    sum = 0;
    for(int j = m; j<=h; j++){
        sum = sum+arr[j];
        if(sum>right_sum){
            right_sum = sum;
        }
    }

    return  max(left_sum +right_sum-arr[m], left_sum, right_sum);
}

int maxsubarray(int arr[], int l, int h){
    if(l>h){
        return INT_MIN;// wrong order
    }
    else if (l==h){
        return arr[l];
    }

    else{
        int m = (l+h)/2;
        return max(maxsubarray(arr, l, m),
        maxsubarray(arr, m+1, h),
        maxcrossubarray(arr, l, m, h));
    }
}

int main(){
    int myarray[] = { 2, 3, 4, 5, 7 };
    int max_number = maxsubarray(myarray, 0,4);
    cout<<" max sum is "<< max_number<<endl;
}