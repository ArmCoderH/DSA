#include <iostream>
#include <vector>
using namespace std;

class Queue {
    vector<int> arr;
    int qfront;
    int rear;
    int size;

public:
    Queue() {
        size = 100001;
        arr.resize(size, -1);
        qfront = 0;
        rear = 0;
    }

    bool isEmpty() {
        return rear == qfront;
    }

    void enqueue(int data) {
        if (rear == size) {
            cout << "Queue is full" << endl;
        } else {
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        } else {
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if (qfront == rear) {
                qfront = 0;
                rear = 0;
            }
            return ans;
        }
    }

    int front() {
        if (isEmpty()) {
            return -1;
        } else {
            return arr[qfront];
        }
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Dequeued: " << q.dequeue() << endl;
    cout << "Dequeued: " << q.dequeue() << endl;

    cout << "Front element: " << q.front() << endl;

    q.enqueue(40);
    cout << "Dequeued: " << q.dequeue() << endl;
    cout << "Front element: " << q.front() << endl;

    cout << "Is queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl;

    q.dequeue();
    cout << "Is queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}