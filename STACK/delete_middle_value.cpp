#include <iostream>
#include <stack> // Include the header for stack
using namespace std;

void solve(stack<int>& inputStack, int count, int size) {
    // Base case: if count reaches the middle of the stack
    if (count == size / 2) {
        inputStack.pop(); // Remove the middle element
        return;
    }

    int num = inputStack.top(); // Store the top element
    inputStack.pop();           // Remove the top element

    // Recursive call to process the next element
    solve(inputStack, count + 1, size);

    // Push the stored element back to maintain order
    inputStack.push(num);
}

void deleteMiddle(stack<int>& inputStack, int N) {
    int count = 0;
    solve(inputStack, count, N);
}

int main() {
    stack<int> inputStack;

    // Pushing elements into the stack
    inputStack.push(1);
    inputStack.push(2);
    inputStack.push(3);
    inputStack.push(4);
    inputStack.push(5);

    // Size of the stack
    int N = inputStack.size();

    // Deleting the middle element
    deleteMiddle(inputStack, N);

    // Printing the remaining stack
    cout << "Stack after deleting the middle element:" << endl;
    while (!inputStack.empty()) {
        cout << inputStack.top() << " ";
        inputStack.pop();
    }

    return 0;
}
