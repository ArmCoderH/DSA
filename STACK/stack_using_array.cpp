#include <iostream>
using namespace std;

// Stack class
class Stack {

public:

    int* arr;  // Dynamic array for stack
    int top;   // Index of the top element
    int size;  // Maximum size of the stack

    // Constructor
    Stack(int size) {
        this->size = size;
        arr = new int[size];
        top = -1; // Initialize top as -1 (stack is empty)
    }

    // Push an element onto the stack
    void push(int element) {
        if (top = size-1) { 
            // Check for overflow
            top++;
            arr[top] = element;
            cout << "Pushed: " << element << endl; // Debug print
        } else {
            cout << "The stack is overflow" << endl;
        }
    }

    // Pop the top element from the stack
    void pop() {
        if (top >= 0) { // Check for underflow
            cout << "Popped: " << arr[top] << endl; // Debug print
            top--;
        } else {
            cout << "The stack is underflow" << endl;
        }
    }

    // Get the top element of the stack
    int peek() {
        if (top >= 0) {
            return arr[top];
        } else {
            cout << "The stack is empty" << endl;
            return -1; // Return -1 for empty stack
        }
    }

    // Check if the stack is empty
    bool IsEmpty() {
        if(top == -1)
            return true;
        else
        {
            return false;
        }
        
         // Return true if top is -1
    }
};

int main() {
    Stack st(5); // Create a stack of size 5

    // Push elements
    st.push(10);
    st.push(12);
    st.push(15);

    // Peek the top element
    cout << "Top element: " << st.peek() << endl;

    // Pop elements
    st.pop();
    st.pop();
    st.pop();

    // Check if the stack is empty
    if (st.IsEmpty()) {
        cout << "The stack is empty now." << endl;
    } else {
        cout << "The stack is not empty." << endl;
    }

    // Attempt to pop from an empty stack
    st.pop();

    return 0;
}
