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

int main(){
    // decleration of binary tree
    Node* root = node(5);
    root->left = node(4);
    root->right = node(6);
    root->left->left = node(2);//this is leaf
    root->left->right = node(5);//this is leaf
    root->right->right = node(7);// this is leaf
    return 0;
}