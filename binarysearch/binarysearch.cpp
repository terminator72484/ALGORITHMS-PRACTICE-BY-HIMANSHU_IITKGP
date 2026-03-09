//Binary search is a search algorithm that finds the position of a target value within a sorted array.
#include<iostream>
#include<vector>
using namespace std;

bool binarySearch(vector<int>& arr, int target){
    int left = 0;
    int right = arr.size() - 1;
    while(left <= right){
        int mid = left + (right - left)/2;
        if(arr[mid] == target) return true;
        else if(arr[mid] > target) right = mid - 1;
        else left = mid + 1;
    }
    return false;
}

bool binarySearch2(vector<int>& arr,int target, int left, int right){
     if(left > right) return false;
     int mid = left + (right - left) / 2;
     if(arr[mid] == target) return true;
     if(arr[mid] > target) return binarySearch2(arr, target, left, mid - 1);
     if(arr[mid] < target) return binarySearch2(arr, target, mid + 1, right);
}
int main(){
    vector<int> arr = {2,4,6,7,11,35,77};
    int target = 11;
    bool x = binarySearch(arr, target);
    cout << x << "  target lies in the array" << endl;
    return 0;
}