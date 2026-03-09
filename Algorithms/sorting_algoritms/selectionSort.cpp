#include<iostream>
using namespace std;

int *selectionSort(int arr[] ,int n){
    int smallestIdx = 0;
    for(int i = 0 ;i < n - 1 ;i++){
        smallestIdx = i;
        for(int j = i + 1 ;j < n ;j++){
            if(arr[j] < arr[smallestIdx]){
                smallestIdx = j;
            }
        }
        swap(arr[i] ,arr[smallestIdx]);
    }
}
