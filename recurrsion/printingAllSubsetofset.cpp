#include<iostream>
#include<vector>
using namespace std;

#include <iostream>
#include <vector>
using namespace std;

void generateSubsets(int index, vector<int>& arr, vector<int>& current) {
    // Base case: reached end of array
    if (index == arr.size()) {
        // print current subset
        cout << "{ ";
        for (int x : current) cout << x << " ";
        cout << "}" << endl;
        return;
    }

    // 1. Include current element
    current.push_back(arr[index]);
    generateSubsets(index + 1, arr, current);

    // Backtrack
    current.pop_back();

    // 2. Exclude current element
    generateSubsets(index + 1, arr, current);
}

int main() {
    vector<int> arr = {1, 2, 3};
    vector<int> current;

    generateSubsets(0, arr, current);

    return 0;
}