// There are two methods to solve this question the first one is level order traversal in which we return the size of the vector<vector>>ans 
// and the other is recurrence relation in the way like that 1 + max(left node, right node) in which the base case is left and right node is null
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
// the time and space compexity of the solution is O(n)
int heightBT(Node* root){
    if(root == nullptr) return 0;
    
    return 1 + max(heightBT(root->left), heightBT(root->right));

}