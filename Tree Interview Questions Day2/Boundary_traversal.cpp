class Solution {

  public:
  
    void LeftNodes(Node* root,vector<int>&ans)
    {
        //base case
        if(root == NULL)
        return;
        
        //when leaf node are present then
        if(root->left == NULL && root->right == NULL)
        return;
        
        //if(!isRoot)
        //{
        ans.push_back(root->data);
        //}
        //check left part are paresnt then print left part
        if(root->left)
        {
            LeftNodes(root->left,ans);
        }
        else//other wise print right part 
        {
            LeftNodes(root->right,ans);
        }
    }
    
    void LeafNode(Node* root,vector<int>&ans)
    {
        //base case
        if(root==NULL)
        {
            return;
        }
        if(root->left == NULL && root->right == NULL)
        {    
            ans.push_back(root->data);
            return;
        }
            LeafNode(root->left,ans);
            LeafNode(root->right,ans);
    }
    
    void RightNodes(Node* root,vector<int>&ans)
    {
        //base case
        if(root == NULL)
        return;
        
        //when leaf node are present then
        if(root->left == NULL && root->right == NULL)
        return;
        
        //check right part are paresnt then print right part
        if(root->right)
        {
            RightNodes(root->right,ans);
        }
        else//other wise print left part 
        {
            RightNodes(root->left,ans);
        }
        
        ans.push_back(root->data);
        //jo aapne pacha aaviya tiyare
        
    }
    vector<int> boundaryTraversal(Node *root) {
        
        vector<int>ans;
        
        if(root == NULL)
        {
            return ans;
        }
        
        ans.push_back(root->data);
        
        // 1}  Traverse left part
        if(root->left)
        {
            LeftNodes(root->left,ans);
        }
        
        
        
        // 2}  Traverse leaf node
        
        //print leaf nodes of LEFT subtree
        LeafNode(root->left,ans);
        
        //print leaf nodes of RIGHT subtree
        LeafNode(root->right,ans);
        
        
        // 3}  traverse right part
        if(root->right)
        {
        RightNodes(root->right,ans);
        }
        return ans;
        
    }
};