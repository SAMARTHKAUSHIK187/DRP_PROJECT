#include<iostream>

using namespace std;

void reverseArray(int arr[], int st, int end){
    int s = st;
    int e = end;
    while (s <= e)
    {
        arr[s] = arr[s] + arr[e];
        arr[e] = arr[s] - arr[e];
        arr[s] = arr[s] - arr[e];
        s++;
        e--;
    }
    
}


void rotateArray(int arr[], int size, int k){
    reverseArray( arr, 0 , size-1-k);
    reverseArray( arr, size-k, size-1);
    reverseArray( arr, 0, size-1);
}

int main(){
    int arr[6]= {1,2,3,4,5,6};
    int k = 2;

    rotateArray(arr,6, 2);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    
}