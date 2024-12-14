#include <iostream>
#include <queue>
#include <stack>
#include <vector>
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

// Function to perform reverse level-order traversal (BFS) on the tree
void ReverseLevelOrderBFSTree(node* root) {
    queue<node*> q;           // Queue for regular BFS
    stack<vector<int>> s;     // Stack to store levels in reverse order

    q.push(root);             // Start with the root node
    q.push(NULL);             // NULL marks the end of a level

    vector<int> currentLevel; // Temporary container for the current level

    while (!q.empty()) {
        node* temp = q.front();
        q.pop();

        if (temp == NULL) {
            // End of the current level
            s.push(currentLevel); // Push the level into the stack
            currentLevel.clear(); // Clear the container for the next level

            if (!q.empty()) {
                q.push(NULL); // Mark the end of the next level
            }
        } else {
            currentLevel.push_back(temp->data); // Add the current node to the level
            if (temp->left) {
                q.push(temp->left); // Add left child to the queue
            }
            if (temp->right) {
                q.push(temp->right); // Add right child to the queue
            }
        }
    }

    // Print levels in reverse order by popping from the stack
    cout << "\nReverse level-order traversal is:" << endl;
    while (!s.empty()) {
        for (int val : s.top()) {
            cout << val << " ";
        }
        cout << endl;
        s.pop();
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

    ReverseLevelOrderBFSTree(root);  // Perform reverse BFS traversal and print the tree
    return 0;
}
