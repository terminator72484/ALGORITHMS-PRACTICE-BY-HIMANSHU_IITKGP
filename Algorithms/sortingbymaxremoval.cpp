#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//sort in descending order
vector<int>sort(vector<int>nums){
    if(nums.size() <= 1) return nums;
    int max = 0;
    for(int i = 1; i < nums.size(); i++){
        if(nums[i] > nums[max]){
           max = i;
        }
    }
    int x = nums[max];
    nums.erase(nums.begin() + max);
    vector<int>temp = sort(nums);
    temp.push_back(x);
    return temp;
}
