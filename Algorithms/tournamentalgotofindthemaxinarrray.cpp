#include<iostream>
#include<vector>
using namespace std;

int tournamentMax(vector<int>nums){
    int n = nums.size();
    if(n == 1) return nums[0];
    vector<int>temp = nums;
    
    while(n > 1){
          int idx = 0;
          for(int i = 0 ;i < n ;i += 2){
              if(i + 1 < n){
                 temp[idx++] = max(temp[i] ,temp[i + 1]);
              } else temp[idx++] = temp[i];
        }
        n = idx;
    }
    return temp[0];
}

int main(){
    vector<int>nums = {4,3,7,4,8,4,3};
    cout << tournamentMax(nums)<<endl;
    return 0;
}