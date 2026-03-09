#include<iostream>
using namespace std;

void printnumbers(int n,int k){
    if(n == 0) return;
    printnumbers(n - 1,k);
    cout << k - n + 1 << " ";
}

int main() {
    int n = 4;
    printnumbers(n,n);
    return 0;
}