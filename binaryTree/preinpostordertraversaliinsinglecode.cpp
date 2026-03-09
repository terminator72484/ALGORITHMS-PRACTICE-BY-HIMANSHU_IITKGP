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
}

class Solution {
public:
    vector<int> preInPostTraversal(Node* root) {
        
        stack<pair<Node*, int>> st;
        st.push({root, 1});
        
        vector<int> pre, in, post;
        
        if (root == NULL) return;

        while (!st.empty()) {
            auto it = st.top();
            st.pop();

            // this is part of preorder
            // increment 1 to 2
            // push the left side of the tree
            if (it.second == 1) {
                pre.push_back(it.first->data);
                it.second++;
                st.push(it);

                if (it.first->left != NULL) {
                    st.push({it.first->left, 1});
                }
            }

            // this is part of inorder
            // increment 2 to 3
            // push right
            else if (it.second == 2) {
                in.push_back(it.first->data);
                it.second++;
                st.push(it);

                if (it.first->right != NULL) {
                    st.push({it.first->right, 1});
                }
            }

            // don't push it back again
            else {
                post.push_back(it.first->data);
            }
        }
    }
};