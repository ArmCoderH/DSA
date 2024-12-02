
// this code is only run on coding ninjah place

//link : https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbm1KRXBMOXk3R0stMnBkUkYtNm9xQ1VVdUIwd3xBQ3Jtc0tuYWVsdk5aQUVHNTF0TXNjSVlEbkRKQlFmUFdoX1dROE5GOVdXLXV6dFJNRDVZVzJsZ0RleW1PODdTMzFWOThmNW1tQ3RwRmdZdGhhQ1NXMGNaZV9ZUXRRZ2Q3WDhHWHRwajh6OWVlY012WEN4ZVJmTQ&q=https%3A%2F%2Fbit.ly%2F34qqmGL&v=BmZnJehDzyU


#include <bits/stdc++.h>
void solve(stack<int>& myStack, int x) 
{
    //base case
    if(myStack.empty())
    {
        myStack.push(x);
        return;
    }

    int num = myStack.top();
    myStack.pop();

    //recurstion call

    solve(myStack,x);

    myStack.push(num);
}
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    solve(myStack,x);
    return myStack;
}
