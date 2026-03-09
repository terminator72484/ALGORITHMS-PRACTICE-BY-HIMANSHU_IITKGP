#include <iostream>
#include <vector>
#include <map>
using namespace std;
//map hashing is most efficent way of hashing the no. of array and it does not use extra space as array hashing
unordered_map <int, int> mapHashing(vector<int> arr){
    unordered_map <int, int> mpp;
    for(int i = 0; i < arr.size(); i++){
        mpp[arr[i]]++;
    }
    return mpp;
}
//This is the hashing of character array using map
unordered_map <char, int> mapcharachterHashing(string arr){
    unordered_map <char, int> mpp;
    for(int i = 0; i < arr.size(); i++){
        mpp[arr[i]]++;
    }
    return mpp;
}

int main(){
    vector<int> arr = {2,3,2,2,4,1,2,4,4,2,2,1,5,56,4,3,4,2,34,24,3,2,34,32};
    // the time complexity of an map for fetching or storing from the map is logn so that's why we use use unordred map
    // map <int, int> mpp;
    // mpp = mapHashing(arr);
    //the average and best time complexity is constant or O(1) and the worst case is O(N)
    unordered_map <int, int> mpp;
    mpp = mapHashing(arr);
    // the way to iterate in map and note that the map store the key in sorted fashion
    // map is good data structure to store the values correspond to key and if the key is not in the map then the key correspond to zero
     for(auto it : mpp){
         cout << it.first << " -> " << it.second << endl;
        }
    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        cout << mpp[number] << endl;
    }
    return 0;
}

