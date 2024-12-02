// this code is only run on coding ninjah place

//link : https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbDNENmZrOVJpRjFleVJ3TGs2ZTVQd21Na0dwZ3xBQ3Jtc0tuVmdQQXl6ZFM2ODBuOHNTa3FnQjd5SnZlRFF0TVRMVjN4RmRIOG9KNmFsaDRoM2NmbHZ5ZUFhUEhGd0wwT2lSdy1PbXhxY2EydmdTUjBaZFB3QlhuTXpmNVlUdVZneEJOQ1lQMWpLNW5vT2xTXzBsdw&q=https%3A%2F%2Fbit.ly%2F3HCBnD4&v=BmZnJehDzyU



void inserAtBottom(stack<int>& stack, int x) 
{
    //base case
    if(stack.empty())
    {
        stack.push(x);
        return;
    }

    int num = stack.top();
    stack.pop();

    //recurstion call

    inserAtBottom(stack,x);

    stack.push(num);
}
void reverseStack(stack<int> &stack) {
    // Write your code here
    if(stack.empty()){
        return;
    }

    int num = stack.top();
    stack.pop();

    reverseStack(stack);

    inserAtBottom(stack, num);

}