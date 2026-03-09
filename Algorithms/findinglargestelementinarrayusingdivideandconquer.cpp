#include<iostream>
#include<vector>
using namespace std;

int findingLargest(vector<int>nums,int left,int right){
    if(left == right) return nums[left];
    
    int mid = left + (right - left) / 2;
    int y1 = findingLargest(nums,left,mid);
    int y2 = findingLargest(nums,mid + 1,right);

    if(y1 >= y2) return y1;
    else return y2;
}


int main(){
    vector<int>nums = {4,3,7,4,8,4,3};
    cout << findingLargest(nums,0,nums.size() - 1)<<endl;
    return 0;

}