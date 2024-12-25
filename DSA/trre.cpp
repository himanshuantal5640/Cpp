#include <iostream>
using namespace std;

struct Node {
    int key;
    Node* left;
    Node* right;
    
    Node(int k) : key(k), left(nullptr), right(nullptr) {}
};

// Preorder traversal function (for future use, if needed)
void preorderTraversal(Node* root) {
    if (root == nullptr) {
        return;
    }
    cout << root->key << " ";    // Process the root
    preorderTraversal(root->left);   // Traverse the left subtree
    preorderTraversal(root->right);  // Traverse the right subtree
}

// Function to calculate the sum of all nodes in the binary tree
int calculateSum(Node* root) {
    if (root == nullptr) {
        return 0;   // Base case: If the node is null, return 0
    }
    // Recursive case: sum the current node's key and the sums of left and right subtrees
    return root->key + calculateSum(root->left) + calculateSum(root->right);
}

int main() {
    int val1, val2, val3;
    cout<<"enter: ";
    cin >> val1 >> val2 >> val3;

    // Creating the binary tree with shirts, pants, and jackets as the nodes
    Node* root = new Node(val1);   // root is shirts
    root->left = new Node(val2);   // left child is pants
    root->right = new Node(val3);  // right child is jackets

    // Calculating the total sum using calculateSum function
    int totalSum = calculateSum(root);
    cout << "Total sum of all clothes: " << totalSum << endl;

    return 0;
}
