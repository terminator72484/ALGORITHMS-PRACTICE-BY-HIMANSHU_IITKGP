#include<iostream>
#include<vector>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

Node* node(int value){
    Node* x = new Node();
    x->data = value;
    x->left = nullptr;
    x->right = nullptr;
    return x;
}
//** in max path sum never consider the negative number or any where never consider the negative ones
int maxPathSum(Node* root,int* maxSum){
    if(root == nullptr) return 0;
    
    int maxl = max(0,maxPathSum(root->left,maxSum));
    int maxr = max(0,maxPathSum(root->right,maxSum));

    int s = root->data + maxl + maxr;
    *maxSum = max(s, *maxSum);

    return root->data + max(maxl, maxr);
}