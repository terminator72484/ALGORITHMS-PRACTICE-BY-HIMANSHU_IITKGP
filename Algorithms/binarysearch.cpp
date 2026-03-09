#include<iostream>
#include<vector>
using namespace std;
//binary search applicable on sorting arrays
int main(){
    vector <int>nums(9);
    nums = {1,2,3,4,5,6,7,8,9};
    int n = nums.size();
    int target = 8;
    int left = 0;
    int right = n - 1;
    int mid = 0;
    int ans = 0;
    while(left <= right){
          mid = left + (right - left)/2;
          if(target < nums[mid]){
             right = mid - 1;
          } else if(target > nums[mid]){
            left = mid + 1;
          } else {
            ans = mid;
            break;
          }
    }
    cout << "THE INDEX of the target is " << ans << endl;
}
//binary search algotrithm code in recursion in c++
int binary_search(vector<int>&nums,int left,int right,int target){
    int mid = left + (right - left)/2;
    if(left > right) return -1;
    if(target < nums[mid]){
       return binary_search(nums,left,mid - 1,target);
    }  else if(target > nums[mid]){
            return binary_search(nums,mid + 1,right,target);  
    }  else return mid;
}