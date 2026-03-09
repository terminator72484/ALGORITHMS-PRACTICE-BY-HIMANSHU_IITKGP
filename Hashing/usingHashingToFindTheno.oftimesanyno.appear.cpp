#include<iostream>
#include<vector>
using namespace std;
//these type of hashing is known as array hsing in which you decleare the maximum hash array of size 10 to power 6 in main function and 10 to power 7 in global
// instead of array hashing we prefer map
// This is called hashing where you store the count of no. in hash array and the indexing of the array are those no. which count we store in hash array
vector<int> hashing(vector<int> arr, int largestNumber){
    vector<int> hash(largestNumber,0);
    for(int i = 0; i < arr.size(); i++){
        hash[arr[i]]++;
    }
    return hash;
}
//The time complexity of the hashing is big O of N
int main(){
    vector<int> arr = {1,2,4,2,4,5,3,4,5,3,2,4,6,3,5,6,3,32};
    int largestNumber = arr[0];
    // int minimumNumber = arr[0];
    for(int i = 1; i < arr.size(); i++){
        if(arr[i] > largestNumber) largestNumber = arr[i];
        // if(arr[i] < minimumNumber) minimumNumber = arr[i];
    }
    
    vector<int> hash = hashing(arr,largestNumber + 1);
    int target;
    cin >>  target;

    if(target > largestNumber || target < 0) {
       cout << 0 << endl;
    } else {
        cout << hash[target] << endl;
    }
    return 0;
}
