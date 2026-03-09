#include<iostream>
#include<vector>
using namespace std;
#
vector<int>minNumOfCoin(vector<int>S,vector<int>T,int X,int Z,int n){
    vector<int>temp;
    //Base condition
    if(Z == 0) return <S,n>;
    if(Z < 0)  return <NULL ,0 >;
    if(T == 0) return <NULL ,0 >;
    //recursive condition
    
    
    vector<int>W = S
    vector<int>U = T

    int min = T.size() - 1;
    vector<int>Pmin = T;
    for(int i = 0 ;i <= (T.size() - 1) ;i++){
        W = S.push_back(T[i]);
        U = T.erase(T.begin() + i);
        <temp,d> = minNoOfCoin(W, U, X + T[i], Z - T[i], n + 1);
        if(d < min){
           min = d
           Pmin = temp;
        }
    }
    return <Pmin,min>;
}

int main(){
    vector<int>c = {8,6,5,2,1};
    int target = 11;
    
}