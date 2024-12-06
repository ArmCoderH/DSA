#include <iostream>
using namespace std;

class CircularQueue {

    int *arr;
    int front;
    int rear;
    int size;

public:
    // Initialize your data structure.
    CircularQueue(int n) {
        size = n;
        front = rear = -1;
        arr = new int[size];
    }

    bool enqueue(int value) {
        if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1))) {
            return false;
        } else if (front == -1) {
            front = 0;
            rear = 0;
        } else if (rear == size - 1 && front != 0) {
            rear = 0;
        } else {
            rear++;
        }
        arr[rear] = value;
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the queue is empty, otherwise returns the dequeued element.
    int dequeue() {
        if (front == -1) {
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;
        if (front == rear) {
            front = rear = -1;
        } else if (front == size - 1) {
            front = 0;
        } else {
            front++;
        }
        return ans;
    }
};

int main() {
    CircularQueue cq(5);

    cout << "Enqueue 10: " << (cq.enqueue(10) ? "Success" : "Failure") << endl;
    cout << "Enqueue 20: " << (cq.enqueue(20) ? "Success" : "Failure") << endl;
    cout << "Enqueue 30: " << (cq.enqueue(30) ? "Success" : "Failure") << endl;
    cout << "Enqueue 40: " << (cq.enqueue(40) ? "Success" : "Failure") << endl;
    cout << "Enqueue 50: " << (cq.enqueue(50) ? "Success" : "Failure") << endl;
    cout << "Enqueue 60: " << (cq.enqueue(60) ? "Success" : "Failure") << endl;

    cout << "Dequeue: " << cq.dequeue() << endl;
    cout << "Dequeue: " << cq.dequeue() << endl;

    cout << "Enqueue 60: " << (cq.enqueue(60) ? "Success" : "Failure") << endl;

    cout << "Dequeue: " << cq.dequeue() << endl;
    cout << "Dequeue: " << cq.dequeue() << endl;
    cout << "Dequeue: " << cq.dequeue() << endl;
    cout << "Dequeue: " << cq.dequeue() << endl;

    return 0;
}