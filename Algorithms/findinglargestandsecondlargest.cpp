#include<iostream>
#include<vector>
using namespace std;

vector<int> findingLargestAndSecondLargest(vector<int>&nums, int left, int right){
    int n = nums.size();
    if(left == right) return {nums[left],nums[left]};
    if(left == right - 1) return {max(nums[left],nums[right]),min(nums[left],nums[right])};
    vector<int>l1 = findingLargestAndSecondLargest(nums,left,(left + right)/2);
    vector<int>l2 = findingLargestAndSecondLargest(nums,(left + right)/2 + 1,right);
    int largest = max(l1[0],l2[0]);
    if(largest == l1[0]) return {largest, max(l2[0],l1[1])};
    else return {largest, max(l1[0],l2[1])};
}
int main(){
    vector<int>nums = {4,3,7,4,8,4,3};
    vector<int>ans = findingLargestAndSecondLargest(nums,0,nums.size() - 1);
    cout << "LARGEST ELEMENT IN THE ARRAY IS " << ans[0] << endl;
    cout << "SECOND LARGEST ELEMENT IN THE ARRAY IS " << ans[1] << endl;
    return 0;
}