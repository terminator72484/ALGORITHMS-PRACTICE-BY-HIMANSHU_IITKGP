#include<iostream>
using namespace std;
// the sum is calculated via backtracking and the call stack is used to store the intermediate results of the sum and then the final result is returned to the main function
int sum(int n){
    if(n == 0) return 0;
    return n + sum(n - 1);

}
int sum2(int n){
    if(n == 0) return 0;
    int prevsum = sum2(n - 1);
    return n + prevsum;
}
// the sum is calculated via tail recursion and the call stack is used to store the intermediate results of the sum and then the final result is returned to the main function
int sum3(int n, int sum){
    if(n < 1){
        return sum;
    }
    return sum3(n - 1, sum + n);
}
int main() {
    int n = 6;
    cout << "Sum from 1 to " << n << " is: " << sum(n) << endl;
    cout << "Sum from 1 to " << n << " is: " << sum2(n) << endl;
    cout << "Sum from 1 to " << n << " is: " << sum3(n, 0) << endl;
    return 0;

}