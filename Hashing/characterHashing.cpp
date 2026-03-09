//these type of hashing is known as array hashing
#include<iostream>
#include<string>
#include<vector>
using namespace std;
//the char array have only small letter alphabet
vector<int> characterHashing(string arr){
    vector<int> hash(26,0);
    for(int i = 0; i < arr.size(); i++){
        hash[arr[i] - 'a']++;
    }
    return hash;
}
int main(){
    string arr = "anshsanansnanannsndnfjkldfljf";
    vector<int> hash;
    hash = characterHashing(arr);
    int q;
    cin >> q;
    while(q--){
    char ch;
    cin >> ch;
    cout << hash[ch - 'a'] << endl;
    }
    return 0;
}