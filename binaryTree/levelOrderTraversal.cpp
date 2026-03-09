#include<iostream>
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
}

class solution{
public:
vector<vector<int>> levelOrder(Node* root){
    vector<vector<int>> ans;
    if(root == nullptr) return ans;

    queue<Node* > q;
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        vector<int>level;

        for(int i = 0; i < size; i++){
            Node *node = q.front();
            q.pop();
            if(node->left  != nullptr) q.push(node->left);
            if(node->right != nullptr) q.push(node->right);
            level.push_back(node->data);
        }

        ans.push_back(level);
    }

    return ans;
}
};