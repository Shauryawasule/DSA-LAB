#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

// Create a new node
Node* createNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

// Insert nodes manually or using any method
Node* insertNode() {
    int value;
    cout << "Enter value (-1 for no node): ";
    cin >> value;

    if(value == -1)
        return nullptr;

    Node* newNode = createNode(value);

    cout << "Enter left child of " << value << endl;
    newNode->left = insertNode();

    cout << "Enter right child of " << value << endl;
    newNode->right = insertNode();

    return newNode;
}

// ----------- Traversals ------------

// Preorder: Root → Left → Right
void preorder(Node* root) {
    if(root == nullptr) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// Inorder: Left → Root → Right
void inorder(Node* root) {
    if(root == nullptr) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Postorder: Left → Right → Root
void postorder(Node* root) {
    if(root == nullptr) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main() {
    cout << "Create Binary Tree:\n";
    Node* root = insertNode();

    cout << "\nPreorder traversal: ";
    preorder(root);

    cout << "\nInorder traversal: ";
    inorder(root);

    cout << "\nPostorder traversal: ";
    postorder(root);

    cout << endl;
    return 0;
}
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

// Create a new node
Node* createNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

// Insert nodes manually or using any method
Node* insertNode() {
    int value;
    cout << "Enter value (-1 for no node): ";
    cin >> value;

    if(value == -1)
        return nullptr;

    Node* newNode = createNode(value);

    cout << "Enter left child of " << value << endl;
    newNode->left = insertNode();

    cout << "Enter right child of " << value << endl;
    newNode->right = insertNode();

    return newNode;
}

// ----------- Traversals ------------

// Preorder: Root → Left → Right
void preorder(Node* root) {
    if(root == nullptr) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// Inorder: Left → Root → Right
void inorder(Node* root) {
    if(root == nullptr) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Postorder: Left → Right → Root
void postorder(Node* root) {
    if(root == nullptr) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main() {
    cout << "Create Binary Tree:\n";
    Node* root = insertNode();

    cout << "\nPreorder traversal: ";
    preorder(root);

    cout << "\nInorder traversal: ";
    inorder(root);

    cout << "\nPostorder traversal: ";
    postorder(root);

    cout << endl;
    return 0;
}