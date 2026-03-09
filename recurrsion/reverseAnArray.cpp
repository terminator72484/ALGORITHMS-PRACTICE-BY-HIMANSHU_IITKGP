#include<iostream>
using namespace std;

void reverseArray(vector<int>& arr, int start, int end){
    if(start >= end) return;
    swap(arr[start],arr[end]);
    reverseArray(arr,start + 1,end - 1);
    return;
}

int main() {
    vector<int> arr = {1,2,3,4,5};
    int n = arr.size();
    reverseArray(arr,0,n - 1);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}