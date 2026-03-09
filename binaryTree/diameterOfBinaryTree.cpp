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
// The given solution is of time complexity O(n^2) which is not optimal solution
int diameterBT(Node* root){
    if(root == nullptr) return 0;

    int mx = heightBT(root->left) + heightBT(root->right);
    
    return max(mx, max(diameterBT(root->left), diameterBT(root->right)));
}

// int heightBT(Node* root, int* dia){
//    if(root == nullptr) return 0;
//    int lh = heightBT(root->left, dia);
//    int rh = heightBT(root->right, dia);
//    int curr = lh + rh;
//    *dia = max(dia,curr)
//    int mx = max(lh, rh);
//    return 1 + mx;
// } 
// the optimal solution is inspire by the method of finding the height of the binary tree and the time complexity of the solution is O(N)
int diameterBT2(Node* root, int* dia){
    if(root == nullptr) return 0;
    int lh = diameterBT2(root->left, dia);
    int rh = diameterBT2(root->right, dia);
    int curr = lh + rh;
    *dia = max(*dia,curr);
    int mx = max(lh, rh);
    return 1 + mx;  
}
// the above code will update the dia variable and return the height of the binary tree 