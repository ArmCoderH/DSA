#include <iostream>
using namespace std;

// Class definition for a node in the binary tree
class node {
    public:
        int data;       // Data stored in the node
        node* left;     // Pointer to the left child
        node* right;    // Pointer to the right child

    // Constructor to initialize a node
    node(int d) {
        this->data = d;
        this->left = NULL;  // Initialize left child as NULL
        this->right = NULL; // Initialize right child as NULL
    }
};





void postorder(node* root)
{
    //base case
    if(root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    //return root;
}






// Function to create a binary tree interactively
node* TreeCreate() {
    cout << "Enter data (-1 for no node): ";
    int data;
    cin >> data;

    // Base case: if user enters -1, return NULL
    if (data == -1) {
        return NULL;
    }

    // Create a new node with the entered data
    node* root = new node(data);

    // Recursively create the left subtree
    cout << "Enter data for the left of " << data << ":" << endl;
    root->left = TreeCreate();

    // Recursively create the right subtree
    cout << "Enter data for the right of " << data << ":" << endl;
    root->right = TreeCreate();

    return root; // Return the created tree
}

// Main function
int main() {
    node* root = TreeCreate(); // Start building the tree

    cout<<"inorder data is="<<endl;
    postorder(root);
    return 0;
}
