#include<bits\stdc++.h>
using namespace std;
struct node {
    int data;
    struct node* left;
    struct node* right;
};
struct node* createNode(int data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
struct node* insertNode(struct node* root, int data) {
    if (root == NULL) {
        root = createNode(data);
    } else {
        int choice;
        cout << "1.Left\n2.Right\n";
        cout << "Enter the choice : ";
        cin >> choice;
        switch (choice) {
            case 1:
                root->left = insertNode(root->left, data);
                break;
            case 2:
                root->right = insertNode(root->right, data);
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    }
    return root;
}
void inorderTraversal(struct node* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        cout << root->data << " ";
        inorderTraversal(root->right);
    }
}
void preorderTraversal(struct node* root) {
    if (root != NULL) {
        cout << root->data << " ";
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}
void postorderTraversal(struct node* root) {
    if (root != NULL) {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        cout << root->data << " ";
    }
}
void deleteTree(struct node* root) {
    if (root != NULL) {
        deleteTree(root->left);
        deleteTree(root->right);
        free(root);
    }
}
int main() {
    int a;
    struct node* root = NULL;
    while(1){
        cout << "Enter the data(-1 to print) : ";
        cin >> a;
        if(a==-1){
            break;
        }
        root=insertNode(root,a);
    }
    cout << "In-order traversal: ";
    inorderTraversal(root);
    cout << endl;

    cout << "Pre-order traversal: ";
    preorderTraversal(root);
    cout << endl;

    cout << "Post-order traversal: ";
    postorderTraversal(root);
    cout << endl;
    deleteTree(root);
    return 0;
}