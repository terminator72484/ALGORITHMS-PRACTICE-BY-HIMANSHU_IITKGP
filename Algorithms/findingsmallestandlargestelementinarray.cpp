#include<iostream>
#include<vector>
using namespace std;

vector<int>findelement(vector<int>&nums,int left,int right){
           
           int n = nums.size();
           if(left == right){
              return {nums[left], nums[left]};
           }
           if(right == left + 1){
              if(nums[left] >= nums[right]){
                 return {nums[left], nums[right]};
              }  else{
                 return {nums[right], nums[left]};
              }
           }
           int mid = left + (right - left) / 2;
           vector<int>temp1;
           vector<int>temp2;

           temp1 = findelement(nums,left,mid);
           temp2 = findelement(nums,mid + 1,right);

           int maximum = max(temp1[0], temp2[0]);
           int minmum =  min(temp1[1], temp2[1]);
           return {maximum, minmum};    
}

int main(){
    vector<int>nums = {4,3,7,4,8,4,3};
    vector<int>nums1 = findelement(nums,0,nums.size() - 1);
    for(int val : nums1){
        cout<<val<<endl;
    }
    return 0;
}