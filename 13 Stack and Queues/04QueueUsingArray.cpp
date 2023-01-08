#include <iostream>
#include <queue>
using namespace std;

class Queue
{
    int *arr;
    int front;
    int rear;
    int size;

public:
    Queue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    // function to check Queue is empty or not
    bool isEmpty()
    {
        if (front == rear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    // function to insert an element
    void enqueue(int data)
    {
        if (rear == size)
            cout << "Queue is Full" << endl;
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    // function to pop element
    int dequeue()
    {
        if (front == rear)
        {
            return -1;
        }
        else
        {
            int ans = arr[front];
            arr[front] = -1;
            front++;
            if (front == rear)
            {
                front = 0;
                rear = 0;
            }
            return ans;
        }
    }

    // function to print front
    int qfront()
    {
        if (front == rear)
        {
            return -1;
        }
        else
        {
            return arr[front];
        }
    }
};

int main()
{
    Queue q(10);
    q.enqueue(11);
    cout << "front of q is: " << q.qfront() << endl;
    q.enqueue(15);
    cout << "front of q is: " << q.qfront() << endl;
    q.enqueue(25);
    cout << "front of q is: " << q.qfront() << endl;

    q.dequeue();
    cout << "front of q is: " << q.qfront() << endl;
    q.dequeue();
    cout << "front of q is: " << q.qfront() << endl;
    q.dequeue();
    cout << "front of q is: " << q.qfront() << endl;

    if (q.isEmpty())
    {
        cout << "Queue is empty " << endl;
    }
    else
    {
        cout << "queue is not empty " << endl;
    }
    return 0;
}