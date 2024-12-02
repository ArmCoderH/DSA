//link :- https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqazFnaUozdV9KXzFYNWxrWTRHNmVHU0lRS056QXxBQ3Jtc0tuYmh4MlJYRUZTb1lfb2VuVzlEWjQtYVVBOVNWQmFldVBmQ3pNMWVGalE3amVUb3NuNUdQYS1NXzE5c29wa2lHaUJuTG1rTlBZa0Z6dlBEOUJMZU5rdm5xU0NUaS1Nd2FTalRab0RUQ1R6ZUl2Tldzcw&q=https%3A%2F%2Fbit.ly%2F3snpr1B&v=BmZnJehDzyU 

#include <bits/stdc++.h> 
void sortInsert(stack<int> &stack, int num)
{
	//base case
	if(stack.empty() || stack.top()<num)
	{
		stack.push(num);
		return;
	}

	int n = stack.top();
	stack.pop();

	sortInsert(stack, num);

	stack.push(n);
}
void sortStack(stack<int> &stack)
{
	//base case
	if(stack.empty())
	{
		return;
	}

	int num = stack.top();
	stack.pop();

	sortStack(stack);

	sortInsert(stack,num);
}