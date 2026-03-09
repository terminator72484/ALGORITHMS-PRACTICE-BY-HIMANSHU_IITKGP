// ...existing code...
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>sort1(vector<int>nums){
    if(nums.size() <= 1) return nums;
    int mx = *max_element(nums.begin(),nums.end());
    auto it = find(nums.begin(), nums.end(), mx);
    if (it != nums.end()) {
        nums.erase(it);
    }
    nums = sort1(nums);
    nums.push_back(mx);
    return nums;
}

int main(){
    vector<int>nums = {4,3,7,4,8,4,3};
    vector<int>ans = sort1(nums);
    for(int i = 0 ;i < ans.size() ;i++){
        cout << ans[i] << " ";
    }
     return 0;
}
// ...existing code...