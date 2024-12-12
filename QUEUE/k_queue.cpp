#include <iostream>
using namespace std;

class kqueue {
public:
    int n;
    int k;
    int freespot;
    int *arr;
    int *front;
    int *rear;
    int *next;

    // Constructor
    kqueue(int n, int k) {
        this->n = n;
        this->k = k;

        front = new int[k];
        rear = new int[k];

        // Initialize front and rear arrays
        for (int i = 0; i < k; i++) {
            front[i] = -1;
            rear[i] = -1;
        }

        next = new int[n];

        // Initialize the next array
        for (int i = 0; i < n; i++) {
            next[i] = i + 1;
        }
        next[n - 1] = -1;

        arr = new int[n];
        freespot = 0;
    }

    // Enqueue operation
    void enqueue(int data, int qn) {
        // Overflow check
        if (freespot == -1) {
            cout << "Queue overflow: No empty space available" << endl;
            return;
        }

        // Find the first free index
        int index = freespot;

        // Update the freespot
        freespot = next[index];

        // If the queue is empty
        if (front[qn - 1] == -1) {
            front[qn - 1] = index;
        } else {
            // Link new element to the previous element
            next[rear[qn - 1]] = index;
        }

        // Update next and rear
        next[index] = -1;
        rear[qn - 1] = index;

        // Push the element into the array
        arr[index] = data;
    }

    // Dequeue operation
    int dequeue(int qn) {
        // Underflow check
        if (front[qn - 1] == -1) {
            cout << "Queue underflow: No elements in queue " << qn << endl;
            return -1;
        }

        // Find the index to pop
        int index = front[qn - 1];

        // Update the front
        front[qn - 1] = next[index];

        // Manage freespot
        next[index] = freespot;
        freespot = index;

        return arr[index];
    }
};

int main() {
    kqueue q(10, 3);

    q.enqueue(10, 1);
    q.enqueue(15, 1);
    q.enqueue(20, 2);
    q.enqueue(25, 1);

    cout << "Dequeued from queue 1: " << q.dequeue(1) << endl;
    cout << "Dequeued from queue 2: " << q.dequeue(2) << endl;
    cout << "Dequeued from queue 1: " << q.dequeue(1) << endl;

    return 0;
}
