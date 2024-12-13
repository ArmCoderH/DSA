#include <iostream>
#include <queue>
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

// Function to perform level-order traversal (BFS) on the tree
void LevelOrderBFSTree(node* root) {
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        if(temp == NULL) { 
            //purana level complete traverse ho chuka hai
            cout << endl;
            if(!q.empty()) { 
                //queue still has some child ndoes
                q.push(NULL);
            }  
        }
        else{
            cout << temp -> data << " ";
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }

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

    cout << "\nLevel-order traversal (BFS) of the tree is:" << endl;
    LevelOrderBFSTree(root);  // Perform BFS traversal and print the tree
    return 0;
}
