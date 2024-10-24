#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


void bucketsort(float arr[], int size){
    vector<float>bucket[size];
    for (int i =0; i<size; i++){
        bucket[int(size*arr[i])].push_back(arr[i]); //  we are placing the elemenrs into different buckets 
    }
    //  sorting each element of the buckets
    for (int j =0; j<size; j++){
        sort(bucket[j].begin(), (bucket[j].end()));
    }

    //sorting each bucket 

    int index = 0;
    for (int i = 0; i <size; i++){
        for( int j = 0; j<bucket[i].size(); j++){
            arr[index++] = bucket[i][j];
    }
}
}


int main(){
    float arr [ ] = {0.9, 0.1, 0.6, 0.7, 0.6, 0.3, 0.1};
    bucketsort(arr, 7);
    for( int i = 0; i <7; i++){
        cout<<arr[i]<<endl;
    }
}




