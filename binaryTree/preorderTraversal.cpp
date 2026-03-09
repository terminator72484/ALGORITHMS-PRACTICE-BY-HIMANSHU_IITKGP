#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

Node* node(int value){
    Node* x  = new Node();
    x->data  = value;
    x->left  = nullptr;
    x->right = nullptr;
    return x;
}

void preorder(Node* root){
    if(root == nullptr) return;

    cout << root->data << ", ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root){
     if(root == nullptr) return;

    inorder(root->left);
    cout << root->data << ", ";
    inorder(root->right);
}

void postorder(Node* root){
    if(root == nullptr) return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << ", ";
}

int main(){
    // decleration of binary tree
    Node* root = node(5);
    root->left = node(4);
    root->right = node(6);
    root->left->left = node(2);//this is leaf
    root->left->right = node(5);//this is leaf
    root->right->right = node(7);// this is leaf
    
    cout << " {";
    preorder(root);
    cout << "}" << endl;

    cout << " {";
    inorder(root);
    cout << "}" << endl;

    cout << " {";
    postorder(root);
    cout << "}" << endl;

    return 0;
}