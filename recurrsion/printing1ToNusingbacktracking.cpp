#include <iostream>
using namespace std;

void printNumbers(int n) {
    if (n == 0) return;
    printNumbers(n - 1);
    // After n =0 executed the backtracking starts because to empty the call stack and print the numbers in increasing order
    cout << n << " ";
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    printNumbers(n);
    return 0;
}