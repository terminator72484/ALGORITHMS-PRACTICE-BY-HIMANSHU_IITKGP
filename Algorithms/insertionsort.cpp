#include<iostream>
#include<vector>
using namespace std;
vector<int>insertionsort(vector<int>nums){
    if(nums.size() <= 1) return nums;
    int key = nums[nums.size() - 1];
    vector<int>temp[nums.size() - 1];
    nums.pop_back();
    temp = insertionsort(nums);
    
}