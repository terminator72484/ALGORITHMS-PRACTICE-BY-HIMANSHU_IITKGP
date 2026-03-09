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

bool isIdentical(Node* root1, Node* root2){
    if(root1 == nullptr && root2 == nullptr) return true;
    // if(root1 == nullptr && root2 != nullptr) return false;
    // if(root1 != nullptr && root2 == nullptr) return false;
    // The upper both lines replace by
    if(root1 == nullptr || root2 == nullptr) return false;
    if(root1->data == root2->data){
       if(isIdentical(root1->left, root2->left) && isIdentical(root1->right, root2->right)) return true;
    }
    return false;
}