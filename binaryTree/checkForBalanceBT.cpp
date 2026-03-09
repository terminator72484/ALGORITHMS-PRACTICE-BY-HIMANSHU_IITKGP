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

int heightBT(Node* root){
    if(root == nullptr) return 0;
    
    return 1 + max(heightBT(root->left), heightBT(root->right));

}
// this is true when the tree nodes have either 0 or 2 children so this code is true 
bool isBalanceBT(Node* root){
     if(root == nullptr) return true;
     if(root->left == nullptr && root->right == nullptr) return true;
     if((root->left == nullptr && root->right != nullptr) || (root->left != nullptr && root->right == nullptr)) return false;
     if(isBalanceBT(root->left) && isBalanceBT(root->right)) return true;
     return false;
}
// but the acutual defination of the binary tree is that the absolut of the diffrence between the left subtree and the right subtree is less than or equal to 1

bool iisBalanceBT(Node* root){
    if(root == nullptr) return true;

    int l = heightBT(root->left);
    int r = heightBT(root->right);
    int diff = l - r;

    if(diff < 0) diff = -1 * diff;

    if(diff > 1) return false;

    return iisBalanceBT(root->left) && iisBalanceBT(root->right);
}