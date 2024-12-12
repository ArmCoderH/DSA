class Solution
{
    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        
        stack <int> s;
        for(int i=0;i<k;i++)
        {
            int value = q.front();
            q.pop();
            s.push(value);
        }
        while(!s.empty())
        {
            int value = s.top();
            s.pop();
            q.push(value);
        }
        int t = q.size()-k;///aagal na element ne pacchad add karva mate
        
        while(t--)
        {
            int value = q.front();
            q.pop();
            q.push(value);
        }
        
        return q;
        
    }
};