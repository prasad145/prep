#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *left, *right;
};

Node* addNewNode(int data)
{
    Node* temp = new Node;
    temp -> data = data;
    temp -> left = temp -> right = NULL;
    return temp;
}

void printPreorder(struct Node* node)
{
    if (node == NULL) return;
    cout << node -> data << " ";
    printPreorder(node -> left);
    printPreorder(node -> right);
}

int main() {
    struct Node* root = addNewNode(1);
    root->left = addNewNode(2);
    root->right = addNewNode(3);
    root->left->left = addNewNode(4);
    root->left->right = addNewNode(5);
    root->right->left = addNewNode(6);
    root->right->right = addNewNode(7);
    printPreorder(root);
    return 0;
}
