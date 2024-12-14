//GFG

class Solution {
    
    private:
    // Function to find the height of a binary tree.
    int height(struct Node* node) {
        //base 
      
        if(node == NULL)
        {
            return -1;
        }
        
        int left = height(node->left)+1;
        int right = height(node->right)+1;
        
        
        return left>right?left:right;
        
    }
  public:
    // Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node* root) {
        //base case
        if(root == NULL)
        {
            return true;
        }
        
        bool left = isBalanced(root->left);
        bool right = isBalanced(root->right);
        bool diff= abs(height(root->left) -height(root -> right)) <= 1;
        
        if(left && right && diff)
        {
            return 1;
        }
        else
        {
            return false;
        }
        
        
    }
};