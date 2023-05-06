// to implement binary search tree

#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *left, *right;
    Node(int value){
        data = value;
        left = NULL;
        right = NULL;
    }
}

*Node insert(Node *root, int val){
    if(root == NULL){
        return new Node(val);
    }
    else if(val < root->data){
        root->left = insert(root->left, val);
    }
    else{
        root->right = insert(root->right, val);
    }
    return root;
};

void inorder(Node *root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    Node *root = NULL;
    root = insert(root, 5);
    insert(root, 1);
    insert(root, 3);
    insert(root, 4);
    insert(root, 2);
    insert(root, 7);
    //print inorder
    inorder(root);
    cout<<endl;

    return 0;
}