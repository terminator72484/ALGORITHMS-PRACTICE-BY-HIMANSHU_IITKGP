#include<iostream>
#include<vector>
#include<stack>
using namespace std;

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

// vector<int> inOrderTraversal(Node* root){
//     vector<int> ans;
//     if(root == nullptr) return ans;
//     stack<Node* > st;
    
//     Node* node = root;
    
//     while(!st.empty() || node != nullptr){

//         while(node != nullptr){
//             st.push(node);
//             node = node->left;
//         }
//         node = st.top();
//         st.pop();
//         ans.push_back(node->value);
//         node = node->right;
//     }
    
//     return ans;
// }

//another code for inorder traversal

vector<int> inOrderTraversal(Node* root){
    vector<int> ans;
    if(root == nullptr) return ans;
    stack<Node* >st;
    Node* node = root;
    while(true){
        if(node != nullptr){
           st.push(node);
           node = node->left;
        }
        else {
           if(st.empty() == true) break;
           node = st.top();
           st.pop();
           ans.push_back(node->data);
           node = node->right;
        }
    }
    return ans;
}
//space and time compexity of the function for inorder traversal is O(n)