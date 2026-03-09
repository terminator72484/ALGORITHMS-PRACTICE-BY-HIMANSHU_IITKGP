#include<iostream>
#include<vector>
#include<stack>
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

vector<int> PreOrderTraversal(Node* root){
    vector<int> ans;
    if(root == nullptr) return ans;
    stack<Node*> st;
    st.push(root);
    while(!st.empty()){
        Node* node = st.top();
        st.pop();

        ans.push_back(node->data);
        
        if(node->right != nullptr) st.push(root->right);
        if(node->left != nullptr) st.push(root->left);
    }
    return ans;
}
