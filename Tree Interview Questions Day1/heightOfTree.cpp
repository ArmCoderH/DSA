
//GFG

class Solution {
  public:
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
};