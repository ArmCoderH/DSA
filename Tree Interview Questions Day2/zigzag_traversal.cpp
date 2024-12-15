class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
        vector <int> result;
        if(root == NULL)
        {
            return result;
        }
        
        queue<Node*> q;
        q.push(root);
    //    Node* MainNode = q.front();
        
        bool leftToRight = true;
        
        //main logic start 
        
        while(!q.empty())
        {
            
            int size = q.size();
            vector<int> ans(size);
            
            for(int i=0; i<size ; i++)
            {
                Node* FrontNode = q.front();
                q.pop();
                
                //revrse or normal print
                
                int index = leftToRight ? i : size - i - 1;
                ans[index] = FrontNode -> data;
            
                
                if(FrontNode->left)
                {
                    q.push(FrontNode->left);
                }
                if(FrontNode->right)
                {
                    q.push(FrontNode->right);
                }
            }
           
            //change direction
            leftToRight = !leftToRight;
            
            for(auto i : ans)
            {
                result.push_back(i);
            }
            
        }
        return result;
    }
};