#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

class Queue
{
public:
    Node *front;
    Node *rear;
    Queue()
    {
        front = NULL;
        rear = NULL;
    }

    // function to insert element
    void enqueue(int x)
    {
        Node *temp = new Node(x);

        if (rear == NULL)
        {
            front = rear = temp;
            return;
        }

        rear->next = temp;
        rear = temp;
    }
    // Function to remove a key from given queue q
    void dequeue()
    {

        if (front == NULL)
            return;

        Node *temp = front;
        front = front->next;

        if (front == NULL)
            rear = NULL;

        delete (temp);
    }
};

int main()
{

    Queue q;
    q.enqueue(10);
    q.enqueue(20);

    cout << "Queue Front : " << (q.front)->data << endl;
    q.dequeue();
    q.dequeue();

    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.dequeue();
    cout << "Queue Front : " << (q.front)->data << endl;
    cout << "Queue Rear : " << (q.rear)->data;
}