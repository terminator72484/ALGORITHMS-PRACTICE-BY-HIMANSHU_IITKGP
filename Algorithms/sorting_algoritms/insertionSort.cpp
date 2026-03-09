#include<iostream>
using namespace std;

int *insertionSort(int arr[], int n){
     int prev = 0;
     int curr = arr[0];
     for(int i = 1 ;i < n ;i++){
         curr = arr[i];
         prev = i - 1;
         while(prev >= 0 && arr[prev] > curr){
            arr[prev + 1] = arr[prev];
            prev--;
         }
         arr[prev + 1] == curr;
     }
}
vector<int> insertionsortthrougnrecurrsion(vector<int> &nums){
    if(nums.size() <= 1) return nums;
    vector<int>temp;
    int m = nums[0];
    nums.erase(nums.begin());
    temp = insertionsortthrougnrecurrsion(nums);
    int n = temp.size();
    int left = 0;
    int right = n - 1;
    int mid;

    while(left <= right){
        mid = left + (right - left) / 2;
        if(m > temp[mid] ) left = mid + 1;
        else right = mid - 1;
    }
    temp.insert(temp.begin() + left,m);
    return temp;
}