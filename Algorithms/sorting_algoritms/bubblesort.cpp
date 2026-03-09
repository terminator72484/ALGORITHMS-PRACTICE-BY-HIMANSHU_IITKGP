#include<iostream>
using namespace std;
//Time compexity of bubble sort is n square
int *bubblesort(int arr[],int n){
    for(int i = 0 ;i < n ;i++){
        bool isSwap = false;
        for(int j = 0 ;j < (n - i - 1) ;j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j] ,arr[j + 1]);
                isSwap = true;
            }
        }
        //array is already sorted
        if(!isSwap){
            return arr;
        }
    }
    return arr;
}