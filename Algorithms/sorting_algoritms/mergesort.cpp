#include<iostream>
#include<vector>
using namespace std;
//not optimal merge sort
vector<int>merge(vector<int>nums1,vector<int>nums2){
    if(nums1.empty()) return nums2;
    if(nums2.empty()) return nums1;
    vector<int>temp;
    int t;
    if(nums1[0] > nums2[0]){
        t = nums2[0];
        for(int i = 1; i < nums2.size(); i++) temp.push_back(nums2[i]);
        temp = merge(nums1,temp);
        temp.insert(temp.begin(),t);
    }
    else{
        t = nums1[0];
        for(int i = 1; i < nums1.size(); i++) temp.push_back(nums1[i]);
        temp = merge(temp,nums2);
        temp.insert(temp.begin(),t);
    }
    return temp;
}


vector<int>mergesort(vector<int>nums){
    if(nums.size() <= 1) return nums;
    int mid = (nums.size()) / 2;

    vector<int>temp1(nums.begin(), nums.begin() + mid);
    vector<int>temp2(nums.begin() + mid, nums.end());

    temp1 = mergesort(temp1);
    temp2 = mergesort(temp2);

    nums = merge(temp1,temp2);

    return nums;

}
//proper merge sort code in optimal time

void merge(vector<int>&arr,int left, int mid, int right){
    vector<int>temp;
    int i = left;
    int j = mid + 1;
    while(i <= mid && j <= right){
       if(arr[i] > arr[j]){
          temp.push_back(arr[j]);
          j++;
       }
       else{
          temp.push_back(arr[i]);
          i++;
       }
    }
    while(i <= mid){
          temp.push_back(arr[i]);
          i++
    }
    while(j <= right){
          temp.push_back(arr[j]);
          j++;
    }
    arr = temp;
}

void mergesort(vector<int>&arr, int left, int right){
    if(left >= right) return;
    int mid = left + (right - left) / 2;
    mergesort(arr, left, mid);
    mergesort(arr, mid + 1, right);
    merge(arr,left,mid,right);
}