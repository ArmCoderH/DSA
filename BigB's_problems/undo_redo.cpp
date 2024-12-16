#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void disply(vector<int> &result)
{
    int size = result.size();
    for (int i = 0; i < size; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
}

void add(vector<int> &result, int data, stack<vector<int>> &undoStack, stack<vector<int>> &redoStack)
{
    if (data <= 0)
    {
        cout << "Data is Invalid:" << endl;
    }
    else
    {
        undoStack.push(result); // all array data are stored in stack
        redoStack = stack<vector<int>>();
        result.push_back(data);
        // result.push_back(data);
    }
    disply(result);
}

void remove(vector<int> &result, stack<vector<int>> &undoStack, stack<vector<int>> &redoStack)
{
    if (result.empty())
    {
        cout << "array is empty" << endl;
    }
    else
    {
        undoStack.push(result); // all array data are stored in stack
        redoStack = stack<vector<int>>();
        result.pop_back();
    }
    disply(result);
}

void sum(vector<int> &result)
{
    int val = 0;
    for (int i = 0; i < result.size(); i++)
    {
        val += result[i];
    }
    cout << "sum of array is:" << val << endl;
}

int undo(vector<int> &result, stack<vector<int>> &undoStack, stack<vector<int>> &redoStack)
{

    redoStack.push(result);
    result = undoStack.top();
    undoStack.pop();
    disply(result);
}

int redo(vector<int> &result, stack<vector<int>> &undoStack, stack<vector<int>> &redoStack)
{

    undoStack.push(result);
    result = redoStack.top();
    redoStack.pop();
    disply(result);
}

int main()
{
    int arr[50];
    vector<int> result;
    stack<vector<int>> undoStack, redoStack;
    int data;
    int choice;
    while (1)
    {
        cout << "case 1. Add value in array" << endl
             << "case 2. remove element from array" << endl
             << "case 3. sum value of array" << endl
             << "case 4 Undo operation" << endl
             << "case 5. redo operation" << endl
             << "case 6. EXIT" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "enter data:";
            cin >> data;
            add(result, data, undoStack, redoStack);
            break;

        case 2:
            remove(result, undoStack, redoStack);
            cout << "remove data sucessfully." << endl;
            break;

        case 3:
            sum(result);
            break;

        case 4:
            undo(result, undoStack, redoStack);
            break;

        case 5:
            redo(result, undoStack, redoStack);
            break;

        case 6:
            cout << "EXIT";
            break;

        default:
            break;
        }
    }
    return 0;
}